#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

// funciones
void insertar(string palabra);
void mostrar(void);
void liberar(void);
int hash(string palabra);

typedef struct nodo
{
    char word[46];
    struct nodo *next;
} nodo;

nodo *hashtable[26]; //A - Z

int main()
{
    int opc;

    do
    {
        printf("\n----------> MENU <----------\n"
                "1. -----> Insertar\n"
                "2. -----> Mostrar\n"
                "3. -----> Salir\n");
2        opc = get_int("Escoger opcion: ");
        if (opc == 1)
        {
            string palabra = get_string("Ingresar palabra: ");
            insertar(palabra);
        }
        else if (opc == 2)
        {
            mostrar();
        }
        else if (opc == 3)
        {
            liberar();
            break;
        }
    } while (opc != 3);
    printf("Gracias, dios lo bendiga :)\n");
    return 0;
}

int hash(string palabra)
{
    int pos = toupper(palabra[0]) - 'A';
    return pos;
}

void insertar(string palabra)
{
    int posicion = hash(palabra);
    printf("%d\n", posicion);
    nodo *nuevo_nodo = malloc(sizeof(nodo));

    if (nuevo_nodo == NULL)
        return ;
    // pasar palabra al nodo credo
    strcpy(nuevo_nodo -> word, palabra);

    // llenando hashtable
    // si esta vacio
    if (hashtable[posicion] == NULL)
    {
        nuevo_nodo -> next = NULL;
        hashtable[posicion] = nuevo_nodo;
    }
    // si esta lleno
    else
    {
        nuevo_nodo -> next = hashtable[posicion];
        hashtable[posicion] = nuevo_nodo;
    }
}

void mostrar(void)
{
    nodo *temp; // i = 0, pero para nodos
    char letra = 'A';

    // recorrer el hashtable
    for (int i = 0; i < 26; i++)
    {
        // recorrer nodos
        temp = hashtable[i];
        printf("%c: ", letra);
        while (temp != NULL)
        {
            printf("%s ", temp -> word);
            temp = temp -> next; // i++ pero para nodos
        }
        printf("\n");
        letra++;
    }
}

void liberar(void)
{
    nodo *temp = NULL;
    nodo *eliminar = NULL;

    for (int i = 0; i < 26; i++)
    {
        temp = hashtable[i];

        while (temp != NULL)
        {
            eliminar = temp;
            temp = temp -> next;
            free(eliminar);
        }
    }
}

