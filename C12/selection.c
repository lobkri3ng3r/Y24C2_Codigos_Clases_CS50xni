// Ordenamiento de seleccion en C
#include <stdio.h>

void ordenamiento_de_seleccion(int arreglo[], int size)
{
    for (int paso = 0; paso < size - 1; paso++)
    {
        int indice_del_menor = paso;
        for (int i = paso + 1; i < size; i++)
        {

            // Para ordenar en orden descendente, cambie > a < en esta línea.
            // Selecciona el elemento menor en cada bucle.
            if (arreglo[i] < arreglo[indice_del_menor])
                indice_del_menor = i;
        }

        // coloca min en la posición correcta
        // se intercambia el indice del menor, con el paso actual
        int temp = arreglo[indice_del_menor];
        arreglo[indice_del_menor] = arreglo[paso];
        arreglo[paso] = temp;
    }
}

// funcion para imprimir un arreglo
void imprimir_arreglo(int arreglo[], int longitud)
{
    for (int i = 0; i < longitud; ++i)
    {
        printf("%d  ", arreglo[i]);
    }
    printf("\n");
}

// funcion principal
int main()
{
    int datos[] = {20, 12, 10, 15, 2};
    int longitud = sizeof(datos) / sizeof(datos[0]);
    ordenamiento_de_seleccion(datos, longitud);
    printf("Arreglo ordenado de forma ascendente:\n");
    imprimir_arreglo(datos, longitud);
}