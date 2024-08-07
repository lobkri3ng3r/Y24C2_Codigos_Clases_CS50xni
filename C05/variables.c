#include <stdio.h>
#include <cs50.h>

int main()
{
    // Variables declaradas -> solamente existen
    bool boleano;
    int entero;
    double doble;
    float flotante;
    long largo;
    char caracter;
    string cadena;

    // Variables inicializadas -> Ya tienen un valor asignado
    boleano = true;
    entero = 10;
    doble = 20.89678;
    flotante = 20.34;
    largo = 100000000000000000;
    caracter = 'a';
    cadena = "Michael";

    // Cada tipo de dato tiene un especificador de formato asociado
    // Esto indica el tipo de salida debe ser especificada para poder ser visualizada
    // la consola

    /*
        Tabla de especificadores de formatos:

        int             %i o %d
        double          %f
        float           %f
        long            %li o %ld
        char            %c
        string          %s
    */

    // Visualizar valor de cada variable desde la consola
    // Usamos printf para ello

    printf("El valor de la variable entero es: %d\n",entero);
    printf("El valor de la variable doble es: %f \n",doble);
    printf("El valor de la variable flotante es: %f \n",flotante);
    printf("El valor de la variable largo es: %li \n",largo);
    printf("El valor de la variable caracter es: %c \n",caracter);
    printf("El valor de la variable cadena es: %s \n\n\n",cadena);

    // Maneras de solicitar un valor al usuario y almacenarlo en una variable:
    // Es decir, puede reemplazar el valor que una variable almacena desde la consola
    // Solicitandole al usuario un dato

    entero = get_int("Ingresa un numero entero: ");
    doble = get_double("Ingresa un numero doble: ");
    flotante = get_float("Ingresa un numero flotante: ");
    largo = get_long("Ingresa un numero largo: ");
    caracter = get_char("Ingresa un caracter: ");
    cadena = get_string("Ingresa una cadena: ");

    // Visualizamos los nuevos valores de las variables
    printf("\n\nEl nuevo valor de la variable entero es: %d \n",entero);
    printf("El nuevo valor de la variable doble es: %f \n",doble);
    printf("El nuevo valor de la variable flotante es: %f \n",flotante);
    printf("El nuevo valor de la variable largo es: %li \n",largo);
    printf("El nuevo valor de la variable caracter es: %c \n",caracter);
    printf("El nuevo valor de la variable cadena es: %s \n",cadena);

    // Indicamos la salida y finalizacion del programa
    // Retornando un 0, en caso de exitoso
    return 0;

}