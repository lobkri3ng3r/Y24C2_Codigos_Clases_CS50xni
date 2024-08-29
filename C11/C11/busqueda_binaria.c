#include <stdio.h>

// Regresa la ubicacion de 'elemento' en un arreglo dado, arreglo[izquierda..derecha], si esta presente,
// sino -1

int busqueda_binaria(int arreglo[], int izquierda, int derecha, int elemento);

int main(void)
{
    int arreglo[] = {2, 3, 4, 10, 40};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int elemento = 10;

    int resultado = busqueda_binaria(arreglo, 0, n - 1, elemento);
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

int busqueda_binaria(int arreglo[], int izquierda, int derecha, int elemento)
{
    while (izquierda <= derecha)
    {
        int centro = izquierda + (derecha - izquierda) / 2;

        // Revisa si elemento esta presente en centro
        if (arreglo[centro] == elemento)
        {
            return centro;
        }

        if (arreglo[centro] < elemento)
        {
            // Si se cumple, ignorar parte izquierda
            izquierda = centro + 1;
        }
        else
        {
            // Si no se cumple, ignorar parte derecha
            derecha = centro - 1;
        }
    }

    return -1;
}
