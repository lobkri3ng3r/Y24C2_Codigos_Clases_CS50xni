#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// Definir la palabra mas larga
#define palabra_mas_larga 45
const int cant_indice = 26;

// Definicion del nodo
typedef struct nodo
{
    char nombre[palabra_mas_larga + 1];
    struct nodo *siguiente;
}
nodo;

// Creacion del diccionario
nodo *tabla[cant_indice] = {NULL};

// Funciones
int hash_function(char primera_letra);
void liberar_memoria();
void imprimir();

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Cantidad de argumentos invalida!!! \n");
        return 1;
    }

    // Se manda abrir el archivo en modo de lectura
    FILE *archivo = fopen(argv[1],"r");

    // Buffer que leera la info del archivo
    char palabra[palabra_mas_larga + 1];

    // Verificar si se puede abrir el archivo
    if (archivo == NULL)
    {
        printf("Error al abrir el archivo \n");
        return 2;
    }

    //Cargar info al diccionario a medida que se lee el archivo
    while(fscanf(archivo,"%s",palabra) != EOF)
    {
        nodo *n = malloc(sizeof(nodo));

        // Copiamos la palabra encontrada en el archivo en la informacion del nodo
        strcpy(n -> nombre, palabra);
         n -> siguiente = NULL;

        // Calculamos el indice de la palabra recien leida
        int indice = hash_function(n -> nombre[0]); // Utilizamos la funcion hash y le pasamos el primer caracter de la palabra

        // Insertamos el nodo en el indice encontrado, es decir, buscamos como agregarlo al diccionario
        n -> siguiente = tabla[indice];

        // Creamos la referencia desde nuestro indice del diccionario
        // Es decir, guardamos la direccion de memoria del nodo recien ingresado
        tabla[indice]  = n;
    }

    // Dejamos de usar el archivo / cerramos
    fclose(archivo);

    // Mandamos a imprimir la informacion de los nodos
    imprimir();

    // Liberamos memoria del diccionario
    liberar_memoria();

    return 0;

}

int hash_function(char primera_letra)
{
    return toupper(primera_letra) - 65;
}

void liberar_memoria()
{
    // Para liberar memoria hay que recorrer cada indice y liberar cada nodo agregado en ellos
    for(int i = 0; i < cant_indice; i++)
    {
        // creamos un puntero auxiliar que nos ayude a desplazarno sobre *un* indice
        nodo *aux = tabla[i];

        // Recorremos los nodos de un indice especifico y los liberamos
        while(aux != NULL)
        {
            // Creamos otro nodo auxiliar o temporal que guarde la direccion de memoria de los nodos vinculados
            // Esto para evitar perder las referencias
            nodo *tmp = aux -> siguiente;
            free(aux);
            aux = tmp;
        }
    }
}

void imprimir()
{
    // Para imprimir iremos recorriendo indice a indice para extraer la informacion encontrada
    // Este proceso es similar a cuando se libera memoria
    // Para liberar memoria hay que recorrer cada indice y liberar cada nodo agregado en ellos
    for(int i = 0; i < cant_indice; i++)
    {
        // creamos un puntero auxiliar que nos ayude a desplazarno sobre *un* indice
        nodo *aux = tabla[i];

        // Recorremos los nodos de un indice especifico y los liberamos

        printf("Índice: %d -> ", i);
        while(aux != NULL)
        {
            // Iremos imprimiendo la info y luego de inprimir solo cambiamos la direccion de memoria
            // que corresponde al siguiente nodo
            printf("%s -> ", aux -> nombre);
            aux = aux -> siguiente;
        }
        printf("NULL\n");
    }

}
