#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Definiendo un puntero y una variable
    int *puntero;
    int a = 10;
    int b = 20;
    puntero = &a;

    printf("%p \n",puntero);
    printf("%i \n",a);

    // Valor nuevo de a
    puntero->20;
    printf("%i \n",a);


}