#include <stdio.h>

int main()
{
    FILE *fp;
    int arr[] = {1, 2, 3, 4, 5};

    // tamaño del arreglo
    size_t n = sizeof(arr) / sizeof(arr[0]);

    fp = fopen("numeros_binarios.bin", "wb");
    if (fp == NULL)
    {
        perror("Error abriendo el archivo");
        return 1;
    }

    // escritura de los datos del arreglo en el archivo
    size_t written = fwrite(arr, sizeof(int), n, fp);
    printf("Numero de elementos escritos: %zu\n", written);

    fclose(fp);
    return 0;
}
