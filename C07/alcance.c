// Librerias
#include <stdio.h>
#include <cs50.h>

// Funcion secundarias suma
int suma(int a, int b);

// Variable global
int numero = 100;

// Funcion main / principal
int main()
{
    // Instrucciones
    /*
        Tipos de alcance
        - global
        - local
        - bloque {condicionales o  ciclos}
    */
    int n = 200;
    numero = 1000;

    int valor_suma = suma(10,10);

    printf("La variable n de funcion main %i \n",n);

    printf("Usando variable numero desde main %i \n",numero);

    /*variable de bloque*/
    while(true)
    {
        int i = 0;
        i++;
        printf("variable i del while %i\n",i);
    }

}

// Definicion de la funcion suma
int suma(int a, int b)
{
    int n = 50;
    printf("La variable n de funcion suma %i \n",n);
    printf("Usando variable numero desde suma %i \n",numero);
    return n;
}