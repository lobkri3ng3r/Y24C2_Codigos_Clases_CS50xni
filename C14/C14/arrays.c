#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *list = malloc(sizeof(int)* 3);
    if(list == NULL)
    {
        printf("No se pudo asignar memoria");
        return 1;
    }
    list[0] = 1;
    list[1]= 2;
    list[2] =3;

    for(int i=0; i<3; i++)
    {
        printf("Contenido: List: %d\n", list[i]);
    }

    int *tmp = realloc(list,(sizeof(int)* 4));
    tmp[3] = 4;

    list = tmp;

    printf("Arreglo Agrandado\n");

     for(int i=0; i<4; i++)
    {
        printf("Contenido: List: %d\n", list[i]);
    }

    int *close = realloc(list,0);
    free(list);
}