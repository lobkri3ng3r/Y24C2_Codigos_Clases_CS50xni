#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


typedef struct nodo
{
    char word[46]; // para no perder tanto espacio en memoria en vano
    struct nodo *next;
}nodo;

// creamos la hashtable, en este caso con un tamaño igual a la cantidad de letras en el abecedario
const int CANTIDAD_DE_ESPACIOS = 26;
nodo *hashtable[CANTIDAD_DE_ESPACIOS];

// prototipo de la función hash
int hash(string palabra);
void insertar(string palabra);
bool buscar(string palabra);
void liberar();
void imprimir();

int main()
{
    int n = get_int("Cuantas palabras quieres insertar? ");
    for (int i = 0; i < n; i++)
    {
        string palabra = get_string("Ingresa la palabra: ");
        insertar(palabra);
    }

    string buscar_palabra = get_string("Ingresa la palabra que quieres buscar: ");
    buscar(buscar_palabra);

    printf("Hashtable completa:\n");
    imprimir();

    printf("Liberando memoria de la hashtable\n");
    liberar();
}

//Definir las funciones
int hash(string palabra)
{
    // usamos el ASCII de las letras mayúsculas para determinar su posición en el arreglo
    int pos = toupper(palabra[0]) - 65;
    return pos;
}

void insertar(string palabra)
{
    // reservamos memoria para un nuevo nodo
    nodo *new = malloc(sizeof(nodo));
    // validar que se haya reservado memoria adecuadamente
    if (new == NULL)
    {
        return;
    }
    // asignamos los campos
    //usamos string copy para asignar el campo "word"
    strcpy(new->word, palabra);
    // obtenemos la posición que debería tener la palabra
    int pos = hash(palabra);
    // hacemos una inserción por cabeza
    new->next = hashtable[pos];
    hashtable[pos] = new;
}

bool buscar(string palabra)
{
    // obtenemos la posición que debería tener la palabra
    int pos = hash(palabra);
    // recorremos la lista enlazada
    for (nodo *temp = hashtable[pos]; temp != NULL; temp = temp->next)
    {
        // comparamos las palabras
        if (strcmp(temp->word, palabra) == 0)
        {
            // si encontramos la palabra, imprimimos un mensaje y retornamos verdadero
            printf("Palabra encontrada\n");
            return true;
        }
    }
    // si no encontramos la palabra, imprimimos un mensaje y retornamos falso
    printf("Palabra no encontrada\n");
    return false;
}

void liberar(){
    // recorremos la hashtable
    for (int i = 0; i < 26; i++)
    {
        // se asigna un puntero al primer nodo del indice
        nodo *temp = hashtable[i];
        while (temp != NULL)
        {
            // Se libera la memoria de cada nodo
            nodo *temp2 = temp->next;
            free(temp);
            temp = temp2;
        }
    }
}

void imprimir(){
    // recorremos la hashtable
    for (int i = 0; i < 26; i++){
        // recorremos la lista enlazada
        for (nodo *temp = hashtable[i]; temp != NULL; temp = temp->next)
        {
            // imprimimos la palabra
            printf("%s\n", temp->word);
        }
    }
}
