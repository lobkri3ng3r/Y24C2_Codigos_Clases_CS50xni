#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Se abre el archivo en modo lectura
    FILE *file = fopen("phonebook.csv", "r");
    if (!file)
        return 1;

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
    fclose(file);

}
