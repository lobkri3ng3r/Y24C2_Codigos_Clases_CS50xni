#include <stdio.h>

int main()
{
    FILE *file;
    int numbers[5];

    file = fopen("numeros_binarios.bin", "rb");
    if (file == NULL)
    {
        printf("Error abriendo el archivo");
        return 1;
    }

    /*
        fread()
        argumento 1 -> bloque de informacion donde se va a guardar la informacion leida del archivo
        argumento 2 -> tamaño en bytes de cada elemento a leer
        argumento 3 -> cantidad de elemento a leer tomando en cuenta el valor del argumento 2
        argumento 4 -> puntero hacia el archivo abierto en escritura binaria
    */
    size_t result = fread(numbers, sizeof(int), 5, file);
    if (result != 5)
    {
        printf("Error leyendo el archivo");
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            printf("Numero %d: %d\n", i + 1, numbers[i]);
        }
    }

    fclose(file);
    return 0;
}
