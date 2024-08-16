// lunes 09/03/2022
// MMEJIA
// Programa de ejemplo de libreria ctype en C

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int solicitud(void);
void isalnum_function(char c);
void isalpha_function(char c);
void isdigit_function(char c);
void islower_function(char c);
void isspace_function(char c);
void isupper_function(char c);
void tolower_function(char c);
void toupper_function(char c);


// funcion principal
int main(void)
{

    int opcion;



    do
    {

        opcion = solicitud();

        if(opcion == 9)
        {
            printf("Gracias por usar el programa\n");
            break;
        }

        char letra = get_char("Ingresa un caracter: ");

        switch(opcion)
        {
            case 1:
                isalnum_function(letra);
                break;
            case 2:
                isalpha_function(letra);
                break;
            case 3:
                isdigit_function(letra);
                break;
            case 4:
                islower_function(letra);
                break;
            case 5:
                isspace_function(letra);
                break;
            case 6:
                isupper_function(letra);
                break;
            case 7:
                tolower_function(letra);
                break;
            case 8:
                toupper_function(letra);
                break;
        }
    }
    while(opcion != 9);

}

int solicitud(void)
{
    int opcion;
    do
    {
        printf("----------------------------------------\n");
        printf("1. isalnum\n");
        printf("2. isalpha\n");
        printf("3. isdigit\n");
        printf("4. islower\n");
        printf("5. isspace\n");
        printf("6. isupper\n");
        printf("7. tolower\n");
        printf("8. toupper\n");
        printf("9. salir\n");
        printf("----------------------------------------\n");
        opcion = get_int("Ingresa una opcion: ");
    }
    while(opcion < 1 || opcion >9 );

    return opcion;
}

void isalnum_function(char c)
{

    if (isalnum(c))
    {
        printf("Your input is alphanumeric.\n");
    }
    else
    {
        printf("Your input is not alphanumeric.\n");
    }

}

void isalpha_function(char c)
{
    if (isalpha(c))
    {
        printf("Your input is alphabetical.\n");
    }
    else
    {
        printf("Your input is not alphabetical.\n");
    }

}

void isdigit_function(char c)
{
    if (isdigit(c))
    {
        printf("Your input is a digit.\n");
    }
    else
    {
        printf("Your input is not a digit.\n");
    }
}

void islower_function(char c)
{
    if (islower(c))
    {
        printf("Your input is a lowercase letter.\n");
    }
    else
    {
        printf("Your input is not a lowercase letter.\n");
    }
}

void isspace_function(char c)
{
    if (isspace(c))
    {
        printf("Your input is whitespace.\n");
    }
    else
    {
        printf("Your input is not whitespace.\n");
    }

}

void isupper_function(char c)
{
    if (isupper(c))
    {
        printf("Your input is a uppercase letter.\n");
    }
    else
    {
        printf("Your input is not a uppercase letter.\n");
    }
}

void tolower_function(char c)
{
     printf("Output: %c\n", tolower(c));
}

void toupper_function(char c)
{
    printf("Output: %c\n", toupper(c));

}