#include <stdio.h>
#include <cs50.h>

int main()
{
    int valores[8]= {45, 50, 1, 0, 7, 5, 3, 8};
    int temporal;
    for (int i=0; i<8; i++)
    {
        for (int j = 0; j<8; j++)
        {
            if (valores[j] > valores[j+1])
            {
                temporal = valores[j+1];
                valores[j+1] = valores[j];
                valores[j] = temporal;
            }
        }
    }
    for (int i = 1; i < 9; i++)
    {
        printf("%d\t", valores[i]);
    }
    printf ("\n");
    return 0;
}