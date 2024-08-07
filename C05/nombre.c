//  Librerias
#include <stdio.h>
#include <cs50.h>

int main()
{
    string nombre = get_string("Ingresa tu nombre: ");
    printf("Hola, %s \n",nombre);
    return 0;
}