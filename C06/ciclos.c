// Librerarias
#include <stdio.h>
#include <cs50.h>

// Funcion principal
int main()
{
    /* ciclos */
    /*
        while  do-while  for
    */
    int n = 10; // Iteradora
    while (n < 10)
    {
        // Instrucciones
        printf("Hola\n");
        n++;
    }
    
    char letra;
    do
    {
        letra = get_char("Dame un letra: \n");
    }
    while(letra != 'N' && letra != 'n');

    // Inicializacion - condicion - incremento/decremento
    for (int i = 0; i <= 10; i++)
    {
        printf("i: %i \t",i);
    }

}