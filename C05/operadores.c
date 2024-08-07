//  Librerias
#include <stdio.h>
#include <cs50.h>

int main()
{
    float suma, resta, division, multiplicacion; // Podemos "crear" más de una variable en una misma linea
    int modulo;
    int numero1, numero2;

    // Solicitamos el valor de los números
    numero1 = get_int("Numero1: ");
    numero2 = get_int("Numero2: ");

    printf("-----------------------------------------\n");

    //Realizamos las operaciones aritmeticas (+ / * - %)

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    division = numero1 / numero2;
    multiplicacion = numero1 * numero2;
    modulo = numero1 % numero2;

    // Impresion de los resultados

    printf("La suma es: %.2f \n",suma); // se coloca .2f para limitar la cantidad de decimales a solo 2
    printf("La suma es: %.2f \n",resta);
    printf("La suma es: %.2f \n",division);
    printf("La suma es: %.2f \n",multiplicacion);
    printf("La suma es: %i \n",modulo);


    return 0;
}