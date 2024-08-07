#include <stdio.h>
#include <cs50.h>


int main() {
    int num,total;
    num = get_int("Ingrese un número para ver su tabla de multiplicar: ");


    for (int i = 1; i <= 10; i++) {
        total = num * i;
        printf("%d x %d = %d\n", num, i, total);
    }
    return 0;
}