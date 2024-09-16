#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // fopen retorna el puntero a un archivo que se abre con cierto formato
    // En este caso se abre con "w", quiere decir que va a crear un archivo nuevo en blanco sin importar si ya existe
    FILE *file = fopen("phonebook.csv", "a");
    char caracter;

    // Condicional para verificar que no ocurrieran errores
    if (!file)
        return 1;

    // Pedir datos de una persona a guardar
    string name = get_string("Name: ");
    string number = get_string("Number: ");
    char name_concat_number[80];

    // Concatenacion de los strings anteriores en uno solo
    strcat(name_concat_number, name);
    strcat(name_concat_number, ",");
    strcat(name_concat_number, number);

    // guardar los datos en el archivo con fputc, escribiendo 1 por 1 los caracteres en el archivo
    for(int i = 0; i < strlen(name_concat_number); i++){
        caracter = name_concat_number[i];
        fputc(caracter, file);
    }
    // Para guardar un salto de linea justo al final del archivo y de la nueva persona ingresada
    fputc('\n', file);

    // cerrar el archivo
    fclose(file);
}
