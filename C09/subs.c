// funcion principal

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int opcion;

    string haystack = "esto es cs50";
    string needle = "x";

    string match = strstr(haystack, needle);
    // printf("%s\n",match);
    if (match)
    {
        printf("si existe: %s\n", match);
    }
    else
    {
        printf("No existe: %s\n", match);
    }

}
