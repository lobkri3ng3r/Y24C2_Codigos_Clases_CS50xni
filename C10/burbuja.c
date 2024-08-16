#include <cs50.h>
#include <stdio.h>

int num[] = {5, 26, 8, 24, 11, 12};

void burbuja();

int main(void)
{
    burbuja();

    for (int i = 0; i < 6; i++)
    {
        printf("%i\t", num[i]);
    }
}

void burbuja()
{
    int n = 6;
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - 1 - j ; i++)
        {
            if (num[i] > num[i + 1])
            {
                int c = num[i];
                num[i] = num[i + 1];
                num[i + 1] = c;
            }
        }
    }
}