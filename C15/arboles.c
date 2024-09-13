#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// #include "struct.h"

// Definimos una estructura llamada arbol
// dentro de ella estara la cantidad de datos que tendra el arbol
// las hojas izquierda y derecha del arbol
// estos ultimos son otra estructura de tipo nodo, ya predeterminado en C

typedef struct node
{
    int number;
    struct node *left;
    struct node *right;

}node;

void print_tree(node *root);
void free_tree(node *root);
bool search(node *tree, int number);

node *raiz = NULL;

int main(void)
{
    node *tree = NULL;
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }

    n -> number = 5;

    n -> left = NULL;

    n -> right = NULL;

    tree = n;

    print_tree(tree);
    search(tree,5);
    free_tree(tree);


}


void print_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }
    print_tree(root->left);
    printf("%i\n", root->number);
    print_tree(root->right);
}


void free_tree(node *root)
{
    if (root == NULL)
    {
        return;
    }

    free_tree(root->left);


    free_tree(root->right);

    free(root);
}

bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }

    else if (number > tree->number)
    {
        return search(tree->right, number);
    }

    else if (number == tree->number)
    {
        return true;
    }

    return false;

}
