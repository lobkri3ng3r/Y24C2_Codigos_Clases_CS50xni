#include <stdio.h>
#include <cs50.h>

int sumar(int numero1, int numero2)
{
    return numero1 + numero2;
}

int main()
{
    int numero1 = get_int("Escribe un numero:\n");
    int numero2 = get_int("Escribe un segundo numero:\n");

    int resultado = sumar(numero1, numero2);
    
    printf("La suma de %d y %d es igual a %d\n", numero1, numero2, resultado);
    return 0;
}
