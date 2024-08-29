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

//Para mientras
nodo *list = NULL;

int main()
{
    //Definimos nuestro nodo que tendra la informacion de los datos
    nodo *info =(nodo*) malloc(sizeof(nodo));

    // LLenamos de informacion los nodos auxiliares
    if(info != NULL)
    {
        info -> nombre = "Michael";
        info -> sig = NULL;
        list = info;
    }

    // Creamos un nuevo nodo donde la informacion nueva se este creando
    nodo *info2 =(nodo*) malloc(sizeof(nodo));

    if(info2 != NULL)
    {
        info2 -> nombre = "Tito";
        info2 -> sig = NULL;
        list -> sig = info2;
    }


    // Mandamos a imprimir la lista
    while(list != NULL)
    {
        printf("%s\n",list -> nombre);
        list = list -> sig;
    }

    // Liberamos la lista

    while (list != NULL)
    {
        nodo *tmp = list->sig;
        free(list);
        list = tmp;
    }


    return 0;
}