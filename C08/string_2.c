#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = "holaaa";

    int i = 0, cont = 0;
    while(s[i] != '\0')
    {
        printf("%c \n", s[i]);
        i++;

        if (s[i] == 'a')
        {
            cont++;
        }
    }

    printf("%i\n", cont);

    for(int j = 0; j < strlen(s); j++)
    {
        printf("%c ", s[j]);
    }
}