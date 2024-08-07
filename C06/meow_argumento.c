#include <stdio.h>

// prototipo de la función meow
void meow(int numero_de_iteraciones);

int main(void)
{
    meow(5);
    return 0;
}

void meow(int numero_de_iteraciones)
{
    for (int i = 0; i < numero_de_iteraciones; i++)
    {
        printf("meow\n");
    }
}
