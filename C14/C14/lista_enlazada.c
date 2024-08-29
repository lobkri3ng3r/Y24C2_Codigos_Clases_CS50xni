#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

// Estructura de tipo nodo - Guarda un nombre;
typedef struct nodo{
    string nombre;
    struct nodo *sig;
}
nodo;

// Existen dos maneras de ver una lista
// Toda lista tiene un primer elemento
nodo *inicio = NULL; // Representara el primer elemento de la lista
nodo *fin = NULL; // Indica el ultimo elemento de la lista
// Y un ultimo elemento


// Definimos una funcion para insertar elementos a nuestro nodo

int main()
{
    //Definimos nuestro nodo que tendra la informacion de los datos
    // nodo *info =(nodo*) malloc(sizeof(nodo));

    int d = get_int("Cuantos elementos desea almacenar? ");
    string n;

    // Comenzamos a crear la lista
    for(int i = 0; i < d; i++)
    {
        nodo *nuevo =(nodo*) malloc(sizeof(nodo));
        n = get_string("Dame un nombre: ");

        nuevo -> nombre = n;
        // Se esta insertando por primera vez un elemento a la lista
        // Por eso inicio es igual al nuevo y el final es igual al nuevo
        if( inicio == NULL)
        {
            inicio = nuevo;
            inicio -> sig = NULL;
            fin = nuevo;
        }
        else // Sino, quiere decir que ya se inserto anteriormente un elemento, solo necesitamos ir actualizando el ultimo
        {
            fin -> sig = nuevo;
            nuevo -> sig = NULL;
            fin = nuevo;
        }

    }

    // Imprimimos la lista
    while(inicio != NULL)
    {
        printf("%s\n",inicio -> nombre);
        inicio = inicio -> sig;
    }

    // Limpiamos la lista
    while(inicio != NULL)
    {
        nodo *tmp = inicio;
        free(inicio);
        tmp = inicio -> sig;
    }
    return 0;
}