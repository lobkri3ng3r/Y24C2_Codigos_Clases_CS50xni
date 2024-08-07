// Librerias
#include <stdio.h>
#include <cs50.h>

// Funcion main / principal
int main()
{
    /*ciclos anidados*/
    int n = 5;

    /* Matriz */
    /*
            0 1 2 3
        0
        1
        2
        3
    */


    for(int i = 0; i < n; i++ ) // Filas
    {
        for(int j = 0; j <= n; j++)// columnas
        {
            printf(".");
        }

        for(int j = 0; j <= i; j++)// columnas
        {
            printf("#");
        }
        printf("\n");
        // printf("%i \n",i);
    }

}
