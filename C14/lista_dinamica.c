#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

typedef struct nodo
{
    string nombre;
    string numero;
    struct nodo *siguiente;
}nodo;

int main()
{
    nodo *inicio = malloc(sizeof(nodo));
    int n = get_int("Cuantos nodos quieres crear? ");

    for (int i = 0; i < n; i++)
    {
        // iniciamos datos del primer nodo
        if (i == 0)
        {
            inicio->nombre = get_string("ingresa tu nombre: ");
            inicio->numero = get_string("ingresa tu numero: ");
            inicio->siguiente = NULL;
        }
        else
        {
            nodo *nuevo = malloc(sizeof(nodo));
            nuevo->nombre = get_string("ingresa tu nombre: ");
            nuevo->numero = get_string("ingresa tu numero: ");
            // Se almacena la direccion del primero
            nuevo->siguiente = inicio;
            // cambiamos el valor de inicio para que p sea el nuevo nodo
            inicio = nuevo;
        }
    }

    for (nodo *i = inicio; i != NULL; i = i->siguiente)
    {
        printf(" Nombre: %s\n Numero: %s\n posicion en memoria del siguiente nodo: %p\n", i->nombre, i->numero, i->siguiente);
    }

    // se libera memoria
    while(inicio != NULL)
    {
        nodo *temp = inicio->siguiente;
        free(inicio);
        inicio = temp;
    }
    return 0;

}
