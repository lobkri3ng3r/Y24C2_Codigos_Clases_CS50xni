
#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main()
{
    string texto = get_string("texto: ");
    int digitos = 0;
    int nodigitos = 0;

    for(int i = 0; i < strlen(texto); i++)
    {
        if(isdigit(texto[i]))
        {
            printf("texto[%i] = %c ---> si es un digito\n",i,texto[i]);
            digitos++;
        }
        else
        {
            printf("texto[%i] = %c ---> No es un digito \n",i,texto[i]);
            nodigitos++;
        }
    }

    printf("La cadena tiene %i tantos numeros \n",digitos);
    printf("La cadena tiene %i tantos letras y simbolos \n",nodigitos);

}