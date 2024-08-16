#include <stdio.h>
#include <cs50.h>

// estructura de mascotas
typedef struct mascotas
{
    string nombre;
    string tipo;
    string amigo; // no voy a poner dueño xd
}
mascotas;

int main()
{
    // Instrucciones
    int cant_animales = get_int("Cantidad de animales: ");
    mascotas animales[cant_animales];

    for (int i = 0; i < cant_animales; i++)
    {
        printf("\n------------ Animal %i ------------------\n",i+1);
        animales[i].nombre = get_string("Nombre mascota: ");
        animales[i].tipo = get_string("Tipo: ");
        animales[i].amigo = get_string("Nombre del amigo: ");
    }

    printf("\n******************Lista de animales*********************\n");

    for (int i = 0; i < cant_animales; i++)
    {
        printf("\n------------ Animal %i ------------------\n",i+1);
        printf("Nombre: %s \n",animales[i].nombre);
        printf("Tipo: %s \n",animales[i].tipo);
        printf("Amigo: %s \n",animales[i].amigo);
    }

}