#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // fopen retorna el puntero a un archivo que se abre con cierto formato
    /* En este caso se abre con "a", quiere decir que va a crear un archivo nuevo en blanco si no existe
    y si existe, va a escribir datos al final */
    FILE *file = fopen("phonebook.csv", "a");

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
