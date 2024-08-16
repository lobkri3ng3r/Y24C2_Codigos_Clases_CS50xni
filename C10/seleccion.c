#include <stdio.h>
#include <cs50.h>

int main()
{
    int n[5] = {2, 5, 8, 6, 4};
    int min;

    for (int i = 0; i < 5;i++)
    {
        printf("%i \t", n[i]);
    }

    printf("\n------------------------------\n");

    // Ordenamiento seleccion
    for (int i = 0; i < 5 - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < 5; j++)
        {
            if (n[j] < n[min])
            {
                min = j;
            }
        }
        int temp = n[i];
        n[i] = n[min];
        n[min] = temp;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i \t", n[i]);
    }

    printf("\n");
}