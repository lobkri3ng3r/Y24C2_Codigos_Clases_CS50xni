#include <stdio.h>
#include <cs50.h>

int main()
{
    int n = 2;
    int arreglo[n];
    int mayor = 0;
    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        arreglo[i] = get_int("Dame el numero --- %i: ",i+1);
    }

    for (int i = 0; i < n; i++)
    {
        if(arreglo[i] > mayor)
        {
            mayor = arreglo[i];
            pos = i;
        }
    }
    printf("El numero mayor es: %i en la posicion %i!!\n",mayor,pos);

    return 0;

}