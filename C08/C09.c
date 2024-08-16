#include <stdio.h>
#include <cs50.h>

int main()
{
    // Tipodato Nombre cant.elementos
    int numero[5]; // ARREGLO UNIDIMENSIONAL

    // guardar elementos de manera manual
   for(int i = 0; i < 5; i++)
   {
        numero[i] = i + 1;
   }

   for(int i = 0; i < 5; i++)
   {
        printf("El valor de numero[%d] es: %d \n", i, numero[i]);
   }

    printf("------------------------------------------------------------\n");
   // ARREGLO BIDIMENSIONAL

    // TIPODATO NOMBRE FILASXCOLUMNAS
    int matriz[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};

    // FILAS
    for(int i = 0 ; i< 3 ; i++)
    {
        // COLUMNAS
        for(int j = 0 ; j< 4 ; j++)
        {
            printf("El valor de matriz[%d][%d] es: %d \n",i,j,matriz[i][j]);
        }
    }

    printf("------------------------------------------------------------\n");
     // probando CARACTERES
    int c1 = 'H';
    int c2 = 'I';
    int c3 = '!';

    int letra1 = 65;
    int letra2 = 90;

    printf("%c\n",letra1);
    printf("%c\n",letra2);
    printf("%i\n",letra1);
    printf("%i\n",letra2);


    // IMPRESION VALOR NORMAL
    printf("%c%c%c\n",c1,c2,c3);
    // IMPRESION NUMERICA
    printf("%i %i %i\n",c1,c2,c3);
    // IMPRESION POR CONVERSION
    printf("%i %i %i\n",(int)c1,(int)c2,(int)c3);

    printf("------------------------------------------------------------\n");

    char l = 'A';
    for(int i = 0; i < 26; i++)
    {
        printf("%c\n",l);
        l = l + 1;
    }
    printf("------------------------------------------------------------\n");




}