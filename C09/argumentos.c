#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

// funcion main
int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("simon si son dos \n");

        int n = strlen(argv[1]);
        string texto = get_string("texto: ");
        int m = strlen(texto);

        for (int i = 0; i < m; i++)
        {
            if(texto[i] == 'a')
            {
                texto[i] = argv[1][i];
            }

        }
        printf("cifrado: %s \n", texto);

        // printf("\n");

        return 0;
    }
    else
    {
        printf("Error\n");
        return 1;
    }

    // printf("argc: %i \n",argc);

    // imprimir nombres
    // for(int i = 0; i < argc; i++)
    // {
    //     printf("argv[%i] ---> %s \n",i,argv[i]);
    // }
}