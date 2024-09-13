#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// Definimos una estructura llamada arbol
// dentro de ella estara la cantidad de datos que tendra el arbol
// las hojas izquierda y derecha del arbol
// estos ultimos son otra estructura de tipo nodo, ya predeterminado en C
typedef struct node
{
    int info;
    struct node *izq;
    struct node *der;

}node;

void insertar(int x);
void imprimirPre(node *reco);
void imprimirPost(node *reco);
void imprimirIn(node *reco);
void free_tree(node *reco);

node *raiz = NULL;

int main()
{
    insertar(50);
    insertar(25);
    insertar(70);
    insertar(8);
    insertar(30);

    printf("--------------------------------------\n");
    printf("Impresion del arbol en orden Prefijo: \n");
    imprimirPre(raiz);
    printf("\n--------------------------------------\n");
    printf("Impresion del arbol en orden Inorden: \n");
    imprimirIn(raiz);
    printf("\n--------------------------------------\n");
    printf("Impresion del arbol en orden Postfijo: \n");
    imprimirPost(raiz);
    printf("\n--------------------------------------\n");

    free_tree(raiz);
}

void insertar(int x)
{
    node *nuevo;
    nuevo =  malloc(sizeof(node));
    nuevo -> info = x;
    nuevo -> izq = NULL;
    nuevo -> der = NULL;

    if (raiz == NULL)
    {
        raiz = nuevo;
    }
    else
    {
        node *anterior;
        node *reco;
        reco = raiz;

        while(reco != NULL)
        {
            anterior = reco;

            if( x < reco -> info)
            {
                reco = reco -> izq;
            }
            else
            {
                reco = reco -> der;
            }
        }

        if(x < anterior -> info)
        {
            anterior -> izq = nuevo;
        }
        else
        {
            anterior -> der = nuevo;
        }
    }
}

void imprimirPre(node *reco)
{
    if(reco != NULL)
    {
        printf("%i ", reco -> info);
        imprimirPre(reco -> izq);
        imprimirPre(reco -> der);
    }


}

void imprimirPost(node *reco)
{
    if(reco != NULL)
    {
        imprimirPost(reco -> izq);
        imprimirPost(reco -> der);
        printf("%i ", reco -> info);
    }

}

void imprimirIn(node *reco)
{
    if(reco != NULL)
    {
        imprimirIn(reco -> izq);
        printf("%i ", reco -> info);
        imprimirIn(reco -> der);

    }
}

void free_tree(node *reco)
{
    if (reco == NULL)
    {
        return;
    }

    free_tree(reco -> izq);
    free_tree(reco -> der);

    free(reco);
}