#include <stdio.h>
#include <string.h>

int main(){
    // se abre el archivo en formato de lectura binaria
    FILE *file = fopen("binary_str.bin", "rb");
    char cadena[80];

    if(!file)
        return 1;

    // Lectura unica de 80 caracteres
    fread(cadena, sizeof(char), 80, file);
    printf("%s\n", cadena);

    fclose(file);
}
