#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // fopen retorna el puntero a un archivo que se abre con cierto formato
    /* En este caso se abre con "a+", quiere decir que va a crear un archivo nuevo en blanco si no existe
    y si existe, va a escribir datos al final, ademas, tambien va a permitir la lectura de datos */
    FILE *file = fopen("phonebook.csv", "a+");

    // Condicional para verificar que no ocurrieran errores
    if (!file)
        return 1;

    // Pedir datos de una persona a guardar
    string name = get_string("Name: ");
    string number = get_string("Number: ");

    // guardar los datos en el archivo
    fprintf(file, "%s,%s\n", name, number);

    // Cadena donde se va a guardar el texto leido
    char cadena[30];

    printf("\nLectura única:\n\n");
    // Se lee una linea, en este caso, la primera, y se imprime
    fscanf(file, "%s\n", cadena);
    printf("%s\n", cadena);

    // Esto es solo un separador
    printf("\n----------------------------------\n\n");


    // Retrocedemos el cursor del archivo al inicio
    rewind(file);

    // Mientras no se encuentre el final del archivo, la lectura de datos no se detiene
    // feof devuelve 0 si no estamos en el final del archivo, 1 en caso de que si
    printf("Lectura completa:\n\n");
    while(!feof(file)){
        // Lee el archivo buscando strings, deteniendose al encontrar un salto de linea
        fscanf(file, "%s\n", cadena);
        printf("%s\n", cadena);
    }

    // cerrar el archivo
    fclose(file);
}
