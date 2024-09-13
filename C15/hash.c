#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
typedef struct nodo
{
    string nombre;
    struct nodo * apuntador;

}nodo;
//creacion de la tabla
nodo * tabla[26];

void agregar_nodo();
void buscar_nodo();
void liberar_nodo();
int hash(string nombre);
int main()
{
    char c;
    do
    {
        c = get_char("Quiere agregar un nuevo nodo? S/N: ");
        if(c != 'S')
        {
            break;
        }
        //funcion para agregar nodo
        agregar_nodo();
    }while(c == 'S');
    buscar_nodo();
    liberar_nodo();
}
void agregar_nodo()
{
    //crear nodo
    nodo * nuevo_nodo = malloc(sizeof(nodo));
    nuevo_nodo -> nombre = get_string("Ingrese su nombre: ");
    nuevo_nodo -> apuntador = NULL;
    //hasheamos el nombre
    int indice = hash(nuevo_nodo -> nombre);
    //no hay nodos en la ll todavia
    if(tabla[indice] == NULL)
    {
        tabla[indice] = nuevo_nodo;
    }
    else
    {
        //insercion por cabeza
        nuevo_nodo -> apuntador = tabla[indice];
        tabla[indice] = nuevo_nodo;
    }
}
void buscar_nodo()
{
    string nombre = get_string("Ingrese nombre a buscar: ");
    int indice = hash(nombre);
    //recorrer una lista enlazada
    for(nodo * i = tabla[indice]; i != NULL ;i = i -> apuntador)
    {
        if(strcmp(nombre, i -> nombre) == 0)
        {
            printf("%s ha sido encontrado\n", i -> nombre);
            return;
        }
    }
    printf("Usuario no encontrado\n");
}
void liberar_nodo()
{
    //ciclo for para recorrer los elementos del arreglo
    for(int i = 0; i < 26; i ++)
    {
        while(tabla[i] != NULL)
        {
            //crear una variable temporal que almacena la direccion del segundo nodo
            nodo * temporal = tabla[i] -> apuntador;
            free(tabla[i]);
            tabla[i] = temporal;
        }
    }
}
int hash(string nombre)
{
    int indice = tolower(nombre[0]) - 97;
    return indice;
}
