#include <stdio.h>
#include <cs50.h>

int main()
{
    // int *puntero;
    // int variable = 10;

    // puntero = &variable;
    // *puntero = variable;

    // printf("valor que guarda puntero: %p\n",puntero);
    // printf("valor que guarda puntero: %i\n",*puntero);
    #include <stdio.h>

    int numbers[] = {4, 6, 8, 2, 7, 5, 0};

    printf("%p\n", &numbers[0]);
    printf("%p\n", &numbers[1]);

    printf("%i\n", *numbers);
    printf("%i\n", *(numbers + 1));
    printf("%i\n", *(numbers + 2));
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));


}