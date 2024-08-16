#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Definir estructura
typedef struct datos
{
    int telefono;
    string nombre;
    string cedula;

}datos;

typedef int entero;

int main()
{
    datos persona[2];
    // entero numero;
    for(int i = 0; i < 2; i++)
    {
        persona[i].nombre = get_string("Nombre: ");
        persona[i].telefono = get_int("Telefono: ");
        persona[i].cedula = get_string("Cedula: ");
    }
    printf("----------------------\n");

    for(int i = 0; i < 2; i++)
    {
        printf("persona[%i]: Nombre: %s, Cedula: %s, edad: %i \n",i, persona[i].nombre, persona[i].cedula, persona[i].telefono);
    }
}