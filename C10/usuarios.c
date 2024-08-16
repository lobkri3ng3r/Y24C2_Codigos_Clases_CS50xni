#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    int rojo;
    int azul;
    int verde;
} RGB;

typedef struct
{
    int id;
    string nombre;
    string contraseña;
    bool activo;
    float nota;
} usuario;

int main()
{
    usuario usuarios[3];

    for (int i = 0; i < 3; i++){
        usuarios[i].nombre = get_string("Ingrese el nombre del usuario: ");
        usuarios[i].contraseña = get_string("Ingrese la contraseña del usuario: ");
        usuarios[i].activo = true;
        usuarios[i].nota = get_float("Ingrese la nota del usuario: ");
        usuarios[i].id = i + 1;
    }

    printf("-------------------\n");
    printf("Busque a un usuario: \n");
    string usuarioABuscar = get_string("Busque un usuario: ");
    string contraseñaDelUsuario = get_string("Ingrese la contraseña para acceder a la información: ");

    for (int i =0; i < 3; i++){
        if(strcmp(usuarios[i].nombre, usuarioABuscar) == 0)
        {
            if (strcmp(usuarios[i].contraseña, contraseñaDelUsuario) == 0)
            {
                printf("%i\n", usuarios[i].id);
                printf("%d\n", usuarios[i].activo);
                printf("%f\n", usuarios[i].nota);
            }
        }
    }
    return 0;
}
