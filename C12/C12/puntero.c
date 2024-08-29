#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Definiendo un puntero y una variable
    int *puntero = NULL;

    int a = 10;
    printf("valor de a:%i \n",a);
    printf("Puntero %p\n",puntero);

    puntero = &a; // referenciando la direccion de memoria de a

    *puntero = 30; // desreferenciando la variable a para modificar el valor de la variable

    printf("direccion del puntero:%p \n",puntero);
    printf("direccion de a:%p \n",&a);

    printf("valor de a:%i \n",a);
    printf("valor de referencia del puntero:%i \n",*puntero);


}