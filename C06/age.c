#include <stdio.h>
#include <cs50.h>

int main() {
    int edad;

    do {
       edad = get_int("Ingrese su edad: ");
       
    } while (edad <= 0);

    printf("Edad ingresada: %d\n", edad);

    return 0;
}