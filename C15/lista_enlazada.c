#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct nodo
{
    string nombre;
    struct nodo * apuntador;

}nodo;

nodo * cabeza = NULL;
void agregar_nodo();
void buscar_nodo();
void liberar_nodo();
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
    //no hay nodos en la ll todavia
    if(cabeza == NULL)
    {
        cabeza = nuevo_nodo;
    }
    else
    {
        //insercion por cabeza
        nuevo_nodo -> apuntador = cabeza;
        cabeza = nuevo_nodo;
    }
}
void buscar_nodo()
{
    string nombre = get_string("Ingrese nombre a buscar: ");
    //recorrer una lista enlazada
    for(nodo * i = cabeza; i != NULL ;i = i -> apuntador)
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
    free(cabeza);
    while(cabeza != NULL)
    {
        //crear una variable temporal que almacena la direccion del segundo nodo
        nodo * temporal = cabeza -> apuntador;
        free(cabeza);
        cabeza = temporal;
    }
}
