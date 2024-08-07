#include <stdio.h>
#include <cs50.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    n = get_int("Ingrese el número de términos: ");


    printf("Serie de Fibonacci: ");

    for (int i = 1; i <= n; i++) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}