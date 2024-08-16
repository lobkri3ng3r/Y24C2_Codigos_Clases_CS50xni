#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%i] = %s \n", i  ,argv[i]);
    }

    if (argc == 3)
    {
        printf("Hola, %s %s", argv[1], argv[2]);
    }
    else
    {
        printf("Ingrese solo tres argumentos \n");
        return 1;
    }
}