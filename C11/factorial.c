#include <stdio.h>
#include <cs50.h>

long factorial(int n);

int main(void)
{
    int n = get_int("Ingrese un numero: ");

    // En este caso, se llama a la función y se imprime directamente
    printf("El factorial de %d es: %ld \n ", n, factorial(n));

    return 0;
}

long factorial(int n)
{
    // Caso base
    if (n == 0)
    {
        // como 0! = 1, se retorna 1
        return 1;
    }
    else
    {
        // Llamada a esta misma función
        return n * factorial(n - 1);
    }
}