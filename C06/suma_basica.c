#include <stdio.h>
#include <cs50.h>

int sumar()
{
    int numero1 = get_int("Escribe un numero:\n");
    int numero2 = get_int("Escribe un segundo numero:\n");
    printf("La suma de %d y %d es igual a %d\n", numero1, numero2, numero1 + numero2);
    return 0;
}

int main()
{
    sumar();
    return 0;
}
