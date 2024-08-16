#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    string texto1 = get_string("texto1: ");
    string texto2 = get_string("texto2: ");

    int valor = strcmp(texto1, texto2);

    printf("valor: %i \n",valor);

    if ( valor == 0)
    {
        printf("Son iguales \n");
    }
    else
    {
        printf("No son iguales \n");
    }
}