document.addEventListener("DOMContentLoaded", () => {
    const form = document.getElementById("cardForm");
    const resultDiv = document.getElementById('results');

    // Escuchar el envío del formulario
    form.addEventListener("submit", async (event) => {
        event.preventDefault();  // Evita que la página se recargue

        const cardNumber = document.getElementById("card_number").value;  // Obtener número de tarjeta
        resultDiv.innerHTML = '';  // Limpiar resultados previos

        if (!cardNumber) {
            resultDiv.innerHTML = '<p>Por favor, ingrese un número de tarjeta válido.</p>';
            return;
        }

        try {
            const response = await fetch('/validar', {
                method: 'POST',
                headers: {
                    'Content-Type': 'application/json'
                },
                body: JSON.stringify({
                    'card_number': cardNumber
                })
            });

            if (!response.ok) throw new Error('Error al validar la tarjeta');

            const data = await response.json();

            if (data.success && data.BIN && data.BIN.country) {
                const binInfo = data.BIN;
                resultDiv.innerHTML = `
                    <h2>Detalles de la tarjeta</h2>
                    <p>Valid: ${binInfo.valid}</p>
                    <p>Tipo: ${binInfo.scheme}</p>
                    <p>País: ${binInfo.country.native}</p>
                    <p>Moneda: ${binInfo.country.currency}</p>
                `;
            } else {
                resultDiv.innerHTML = '<p>Hubo un error en la validación de la tarjeta.</p>';
            }
        } catch (error) {
            resultDiv.innerHTML = `<p>${error.message}</p>`;
        }
    });
});
