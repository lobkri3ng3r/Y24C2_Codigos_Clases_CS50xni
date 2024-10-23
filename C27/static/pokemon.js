document.addEventListener("DOMContentLoaded", () => {
    const form = document.getElementById("formulario");

    form.addEventListener("submit", async (event) => {
        event.preventDefault();  // Prevenir el comportamiento por defecto del formulario

        const pokemon_name = document.getElementById("pokemon_name").value;

        // Llamar a la función que obtiene el Pokémon
        const pokemon = await getPokemon(pokemon_name);

        // Mostrar el resultado en la consola y en el HTML
        console.log(`Pokemon:`, pokemon);
        console.log(`Pokemon abilities:`,  pokemon.abilities);

        // Mostrar la información del Pokémon en el div con id 'pokemon'
        const pokemonDiv = document.getElementById("pokemon");
        const pokemonStats = pokemon.stats;
        const pokemonAbilities = pokemon.abilities;

        pokemonDiv.innerHTML = `
        
            <p><strong>Nombre:</strong> ${pokemon.name}</p>
            <p><strong>Habilidades:</strong> ${pokemonAbilities.map(ability => ability.ability.name).join(', ')}</p>

            <h3>Stats</h3>
            <ul>
                ${pokemonStats.map(ability => `<li>${ability.base_stat} || ${ability.stat.name}</li>`).join('')}
            </ul>

            <img src="${pokemon.sprites.front_default}" alt="${pokemon.name}"/>
        `;
    });
});

async function getPokemon(pokemon_name) {
    try {
        // Realizar la solicitud POST al backend de Flask
        const response = await fetch("/pokeapi", {
            method: "POST",
            headers: {
                "Content-Type": "application/json"
            },
            body: JSON.stringify({ pokemon_name })
        });

        // Obtener los datos de la respuesta en formato JSON
        const data = await response.json();

        return data;
    } catch (error) {
        console.error(`Error: ${error}`);
    }
}
