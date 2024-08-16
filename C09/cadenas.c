// Librerias
#include <stdio.h>
#include <cs50.h>
#include <string.h>

// Funcion main
int main()
{
    string s1 = get_string("s1: ");
    int c = strlen(s1);
    char s2[cx];

    strcpy(s2,s1);

    printf("s1: %s\n",s1);
    printf("s2: %s\n",s2);

    // int n = strcmp(s1, s2);
    // printf("%i\n",n);

    // if (n == 0)
    // {
    //     printf("son iguales \n");
    // }
    // else{
    //     printf("No son iguales \n");
    // }


    // int n = strlen(texto);


    // for(int i = 0; i < n; i++)
    // {
    //     // printf("%c\n",texto[i]);
    //     if(texto[i] == 'a')
    //     {
    //         texto[i] = '@';
    //     }
    // }
    // printf("n: %s\n",texto);
}