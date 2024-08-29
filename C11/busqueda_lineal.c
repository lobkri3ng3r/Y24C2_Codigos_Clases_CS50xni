#include <stdio.h>

// Regresa la ubicacion de 'elemento' en un arreglo dado, arreglo[l..r], si esta presente,
// sino -1

int busqueda(int arreglo[], int n, int elemento);

int main(void)
{
    int arreglo[] = {2, 3, 4, 10, 40};
    int n = sizeof(arreglo) / 4;
    int elemento = 10;
    int resultado = busqueda(arreglo, n, elemento);
    if (resultado == -1)
    {
        printf("El elemento no esta presente en el arreglo\n");
    }
    else
    {
        printf("El elemento %d esta presente en el index: %d\n", elemento, resultado);
    }

    return 0;
}

int busqueda(int arreglo[], int n, int elemento)
{
    for (int i = 0; i < n; i++)
    {
        if (arreglo[i] == elemento)
        {
            return i;
        }
    }
    return -1;
}