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

    printf("\nLectura unica:\n\n");
    // Se lee una linea, en este caso, la primera(incluido su salto de linea), y se imprime
    // Si no ocurre ningun error, y tampoco estamos al final del archivo, fgets guarda una linea de texto en la variable string que pasemos
    fgets(cadena, 30, file);
    printf("%s", cadena);

    // Esto es solo un separador
    printf("\n----------------------------------\n\n");

    // Retrocedemos el cursor del archivo al inicio
    rewind(file);

    // Mientras no se encuentre el final del archivo, la lectura de datos no se detiene
    // fgets devuelve la cadena leida si no estamos en el final del archivo, y NULL en caso de llegar al final del archivo
    printf("Lectura completa:\n\n");
    while(fgets(cadena, 30, file) != NULL){
        // Lee el archivo buscando strings, deteniendose al encontrar un salto de linea
        printf("%s", cadena);
    }
    fclose(file);

}
