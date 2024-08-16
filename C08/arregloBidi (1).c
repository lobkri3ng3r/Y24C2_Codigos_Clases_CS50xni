#include <stdio.h>
#include <cs50.h>

int main()
{
    //declara un arreglo de chars llamado 'caraCuboRubik' que guarda 9
    // lugares (3 filas x 3 columnas)
    char caraCuboRubik[3][3] =
    {
        {'B','R','B'},
        {'B','B','A'},
        {'B','B','B'}

    };

    //Imprime la letra 'A'
    printf("%c\n", caraCuboRubik[1][2]);

    //Recorrer matriz bidimensional
    for(int i = 0; i < 3; i++ )  // >>>> recorre filas <<<<
    {
        for(int j = 0; j < 3; j++ ) // >>>> recorre columnas <<<<
        {
            printf("Color> %c\n", caraCuboRubik[i][j]);
        }

    }

    return 0;
}
