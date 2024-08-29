#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

typedef struct nodo
{
    int valor;
    struct node *sig;

}Lista;

void insertar(Lista *cabeza, int numero);
void imprimir(Lista cabeza);
void borrar(Lista cabeza);


int main()
{
    int numero;
    Lista *cabeza;
    cabeza = NULL;

    printf("Ingresa elementos, -1 para terminar: ");
    scanf("%d",&numero);

    while(numero != -1)
    {
        insertar(cabeza,numero);
        printf("Ingresado correctamente \n");
        printf("Ingresa elementos, -1 para terminar: ");
        scanf("%d",&numero);
    }

    printf("\n Imprimiendo lista ingresada: ");
    imprimir(&cabeza);

    printf("\n Borrando lista ... \n");
    borrar(&cabeza);



}

void insertar(Lista cabeza, int numero)
{
    // creamos un nuevo nodo
    Lista *nuevo;

    // Utilizamos malloc para reservar memoria para ese nodo
    nuevo = malloc(sizeof(Lista));

    // Asignamos el valor que se llegue a ingresar por pantalla a ese nodo
    nuevo -> valor = numero;

    // Le asignamos el siguiente valor de cabeza
    nuevo -> sig = cabeza;

    // Cabeza pasa a ser el ultimo nodo agregado
    *cabeza = nuevo;
}

void imprimir(Lista cabeza)
{
    while(cabeza != NULL)
    {
        // Imprimimos el valor del nodo
        printf(" %d ", cabeza -> valor);

        // Pasamos al siguiente nodo
        cabeza = cabeza -> sig;
    }
}

void borrar(Lista cabeza)
{
    // puntero auxiliar para eliminar correctamente la lisat
    Lista *actual;

    while(*cabeza != NULL)
    {
        // Actual toma el valor de cabeza
        actual = *cabeza;

        // Cabeza avanza 1 posicion en la lista
        *cabeza = *cabeza -> sig;

        // Se libera la memoria de la posicion actual
        free(actual);
    }
}