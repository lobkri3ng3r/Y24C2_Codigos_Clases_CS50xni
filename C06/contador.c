#include <stdio.h>
#include <cs50.h>

int calcular_longitud_numero(int numero)
{
    long divisor = 10;
    int longitud = 1;
    while (numero % divisor != numero)
    {
        divisor = divisor * 10;
        longitud++;
    }
    return longitud;
}

int main()
{
    int numero = get_int("Escribe un numero entero para obtener su cantidad de dígitos:\n");
    int longitud = calcular_longitud_numero(numero);

    printf("El numero %d tiene %d dígitos\n", numero, longitud);
    return 0;
}
