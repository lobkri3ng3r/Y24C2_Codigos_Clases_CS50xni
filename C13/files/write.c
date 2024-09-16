#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // fopen retorna el puntero a un archivo que se abre con cierto formato
    // En este caso se abre con "w", quiere decir que va a crear un archivo nuevo en blanco sin importar si existe o no
    FILE *file = fopen("phonebook.txt", "w");

    // Condicional para verificar que no ocurrieran errores
    if (!file)
        return 1;

    // Pedir datos de una persona a guardar
    string name = get_string("Name: ");
    string number = get_string("Number: ");

    // guardar los datos en el archivo
    fprintf(file, "%s,%s\n", name, number);

    // cerrar el archivo
    fclose(file);
}
