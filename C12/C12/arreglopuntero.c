#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Cuantos enteros necesita: ");
    scanf("%i",&n);

    int *numeros = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&numeros[i]);
    }

    printf("%i \n", numeros[1]);

}
