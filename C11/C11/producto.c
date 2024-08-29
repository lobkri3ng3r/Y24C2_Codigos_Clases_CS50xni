#include <stdio.h>
#include <cs50.h>

int producto(int a, int b);

int main(void)
{
    int x = get_int("Numero a: ");
    int y = get_int("Numero b: ");

    // En este caso, se llama a la función y se imprime directamente
    printf("El producto es: %d\n", producto(x, y));

    return 0;
}

int producto(int a, int b)
{
    // Caso base
    if (b == 0) /*  */
    {
        // Como b vale 0, se retorna 0
        return 0;
    }
    else
    {
        // Llamada a esta misma función
        return a + producto(a, b - 1);
    }
}