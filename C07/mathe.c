// Librerias
#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Funcion main / principal
int main()
{
    float n = 52.78;
    int redondeado = round(n); 
    printf("n: %.2f\n",n);
    printf("redondeado: %i\n",redondeado);
    printf("This is CS%i\n", (int) round(49.5));

}
