#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // ver la cantidad de argumentos que se ingresan
    for(int i = 0; i < argc; i++)
    {
        printf("argv[%i]: %s\n",i,argv[i]);
    }

    FILE *archivo = fopen(argv[1],"a");

    if(!archivo)
    {
        printf("Error\n");
        return 1;
    }


    int c;
    // Codigo que carga en memoria nuestros numeros;
    char linea[100]; // Asumimos que cada línea tiene un máximo de 100 caracteres

    int i = 0; // Variable iteradora
    while (fgets(linea, sizeof(linea), archivo) != NULL)
    {
        printf("%s\n", linea);
        i++;
    }

    printf("cantidad de numeros encontrados: %i\n",i);
    fclose(archivo);




}