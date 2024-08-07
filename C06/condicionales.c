// Librerarias
#include <stdio.h>
#include <cs50.h>

// Funcion principal
int main()
{
    /* CONDICIONALES */
    /*
        IF ELSE ELSE-IF
    */
    int numero1 = 50;
    int numero2 = 50;

    if (numero1 < numero2)
    {
        // instrucciones
        printf("Numero1 es menor que Numero2 \n");
    }
    else if (numero1 > numero2)
    {
        printf("Numero1 es mayor que Numero2 \n");
    }
    else
    {
        printf("Numero1 es igual que Numero2 \n");
    }
    printf("--------------------\n");
    int edad = get_int("Dame tu edad: ");
    int dinero = get_int("Cuanto dinero traes? ");
    printf("--------------------\n");

    if (edad >= 18 && dinero >= 10000)
    {
        printf("Bienvenido a la fiesta \n");
    }
    else if ((edad < 18 && edad >= 15) || dinero < 1000)
    {
        printf("No hay entrada para ti \n");
    }
    else
    {
        printf("Tu ni dinero tienes!!! \n");
    }


}