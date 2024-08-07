#include <stdio.h>
#include <cs50.h>

int main() {
    int n, factorial = 1;

    n = get_int("Ingrese un número: ");

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("El factorial de %d es: %d\n", n, factorial);
    return 0;
}