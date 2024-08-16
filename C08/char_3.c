#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // imprimir abcdario
    for (int i = 65; i <= 90; i++)
    {
        printf("%c", i);
    }

    printf("\n");

    for (char i = 'a'; i <= 'z'; i++)
    {
         printf("%c", i);
    }
    printf("\n");

    return 0;
}