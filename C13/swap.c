#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int main()
{
    int a = 5;
    int b = 3;

    printf("El Valor Original de A es:%d\n",a);
    printf("El Valor Original de B es:%d\n",b);

    swap(&a,&b);

    printf("El Valor Nuevo de A es:%d\n",a);
    printf("El Valor Nuevo de B es:%d\n",b);


}