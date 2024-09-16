#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main(void)
{
    // fopen retorna el puntero a un archivo que se abre con cierto formato
    // En este caso se abre con "wb", quiere decir que va a crear un archivo en binario nuevo en blanco sin importar si existe o no
    FILE *file = fopen("binary_str.bin", "ab+");

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
    strcat(name_concat_number, "\n");

    // guardar los datos en el archivo en binario
    /*
        fwrite()
        argumento 1 -> bloque de informacion a escribir en el archivo
        argumento 2 -> tamaño en bytes de cada elemento a escribir
        argumento 3 -> cantidad de elemento a escribir tomando en cuenta el valor del argumento 2
        argumento 4 -> puntero hacia el archivo abierto en escritura binaria
    */
    fwrite(name_concat_number, sizeof(char), strlen(name_concat_number), file);

    // Regresa el cursor del archivo al inicio para comenzar la lectura de todos los valores
    rewind(file);
    char cadena[80];
    // Lectura unica de 80 caracteres
    fread(cadena, sizeof(char), 80, file);
    printf("\n%s\n", cadena);

    // cerrar el archivo
    fclose(file);
}
