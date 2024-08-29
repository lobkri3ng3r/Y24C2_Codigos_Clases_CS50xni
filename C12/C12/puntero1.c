#include <stdio.h>
#include <cs50.h>

int main()
{
    int *puntero;
    int numero = 10;

    printf("Valor inicial numero: %i\n",numero);
    //--------------------------------------------------------
    // nuevo valor
    puntero = &numero;
    *puntero = 20;
    printf("Valor final numero: %i\n",numero);
}