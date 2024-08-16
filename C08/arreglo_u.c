#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = 5;
    int arreglo[n];

    for (int i = 0; i < n; i++)
     arreglo[i] = get_int("Dame un numero --- %i",i+1);

    {
        arreglo[i] = get_int("Dame el numero --- %i: ",i+1);
    }

    int valor = get_int("Que numero quieres buscar? ");

    for (int i = 0; i < n; i++)
    {
        if(arreglo[i] == valor)
        {
            printf("Numero Encontrado!!!\n");
            return 0;
        }
    }
    printf("Numero no encontrado!!!\n");

    return 0;

}