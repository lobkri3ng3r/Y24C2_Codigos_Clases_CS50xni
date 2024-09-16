#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Se abre el archivo en modo lectura
    FILE *file = fopen("phonebook.csv", "r");
    if (!file)
        return 1;

    // caracter donde se va a guardar el texto leido
    char caracter;

    printf("\nLectura unica:\n\n");
    // Se lee un caracter y se imprime
    caracter = fgetc(file);
    printf("%c\n", caracter);

    // Esto es solo un separador
    printf("\n----------------------------------\n\n");

    // Retrocedemos el cursor del archivo al inicio
    rewind(file);

    // Mientras no se encuentre el final del archivo, la lectura de datos no se detiene
    // fgetc devuelve el caracter leida si no estamos en el final del archivo
    // EOF representa una constante o variable en C que simboliza el fin de un archivo, se encuentra justo al final
    printf("Lectura completa:\n\n");
    while((caracter = fgetc(file))!= EOF){
        // Lee el archivo buscando strings, deteniendose al encontrar un salto de linea
        printf("%c", caracter);
    }
    fclose(file);

}
