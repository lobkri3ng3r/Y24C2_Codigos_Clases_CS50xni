#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct {
    string nombre;
    string numero;
}
persona;

int main(){
    persona personas[5];

    personas[0].nombre = "Adriana";
    personas[0].numero = "+505 8965 1420";

    personas[1].nombre = "Andrés";
    personas[1].numero = "+505 9655 5621";

    personas[2].nombre = "Camila";
    personas[2].numero = "+505 2345 1420";

    personas[3].nombre = "Juan";
    personas[3].numero = "+505 2365 1420";

    personas[4].nombre = "Mariana";
    personas[4].numero = "+505 8343 1420";

    for (int i =0; i < 5; i++){
        if (strcmp(personas[i].nombre, "Camila") == 0)
        {
            printf("El número de Camila es: %s\n", personas[i].numero);
        }
    }
}
