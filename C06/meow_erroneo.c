#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        /* Aquí meow para el compilador no existe, ya que su declaración está mas abajo, y no se ha
        definido ningún prototipo para la función antes del main, por lo tanto, dará error */
        meow();
    }
    return 0;
}

void meow(void)
{
    printf("meow\n");
}
