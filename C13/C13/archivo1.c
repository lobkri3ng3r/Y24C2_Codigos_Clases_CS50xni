#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc,string argv[]) {
    FILE *archivo; // Declarar un puntero de tipo FILE para representar el archivo

    archivo = fopen(argv[1], "r"); // Abrir el archivo en modo lectura ("r")

    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1; // Salir del programa con un código de error
    }

    char caracter;
    int n = 1;

    // Leer y mostrar el contenido del archivo caracter por caracter
    while ((caracter = fgetc(archivo)) != EOF) {
        printf("%c", caracter);
         if (caracter == '\n') {
            n++;
        }
    }

    printf("\n------------------------------\n");
    printf("Valor de n = %i\n",n);

    fclose(archivo);

    return 0; // Salir del programa con éxito
}
