#include <stdio.h>
#include <cs50.h>

int main() {
    // Variable que almacenará el número de datos que se solicitarán
    int n;

    // Se pide al usuario que ingrese la cantidad de datos
    n = get_int("Cuantos datos vas a pedir? ");

    // Se declara rreglo para almacenar la cantidad n de notas
    int notas[n];

    // Ciclo para solicitar cada uno de los datos y almacenarlos en el arreglo
    for(int i = 0; i < n; i++ )
    {
        notas[i] = get_int("Dato %d> ", i);
    }

    // Se inicializa una variable para acumular la suma de los datos
    int suma = 0;

    // Ciclo para imprimir cada uno de los datos y sumarlos
    for(int i = 0; i < n; i++ )
    {
       suma += notas[i]; // Se suma el valor actual a la suma total
    }

    // Se imprime la suma total de los datos
    printf("Suma total: %d\n", suma);

    return 0;
}
