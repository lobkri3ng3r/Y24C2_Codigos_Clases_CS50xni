#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int rojo;
    int azul;
    int verde;
} RGB;

int main()
{
    RGB pixeles[3];

    for (int i = 0; i < 3; i++)
    {
        pixeles[i].rojo = get_int("Ingrese el valor rojo del pixel %i: ", i + 1);
        pixeles[i].verde = get_int("Ingrese el valor verde del pixel %i: ", i + 1);
        pixeles[i].azul = get_int("Ingrese el valor azul del pixel %i: ", i + 1);
    }

    printf("-----------------------\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Pixel %i: \n", i+1);
        printf("Rojo: %i\n", pixeles[i].rojo);
        printf("Verde: %i\n", pixeles[i].verde);
        printf("Azul: %i\n", pixeles[i].azul);
        printf("-----------------------\n");
    }

    return 0;
}
