#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main()
{
    string texto = get_string("texto: ");
    int n = strlen(texto);
    char txt[n];

    for(int i = 0;i < n ;i++)
    {
        txt[i] = toupper(texto[i]);
    }

    for(int i = 0;i < n ;i++)
    {
         printf("%c",txt[i]);
    }


    printf("\n");
}
