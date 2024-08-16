// lunes 09/03/2022
// MMEJIA
// Programa de ejemplo de libreria string en C

#include <stdio.h>
#include <cs50.h>
#include <string.h>

void funtion_strcpy(void);
void funtion_strcmp(void);
void funtion_strlen(void);
void funtion_strstr(void);
int solicitud(void);


// funcion principal
int main(void)
{
    int opcion;

    do
    {
        opcion = solicitud();

        switch(opcion)
        {
            case 1:
                funtion_strcpy();
                break;
            case 2:
                funtion_strcmp();
                break;
            case 3:
                funtion_strlen();
                break;
            case 4:
                funtion_strstr();
                break;

            case 5:
                printf("Programa finalizado\n");
                break;
        }

    }
    while(opcion != 5);
}

int solicitud(void)
{
    int opcion;
    do
    {
        printf("----------------------------------------\n");
        printf("1. funtion_strcpy\n");
        printf("2. funtion_strcmp\n");
        printf("3. funtion_strlen\n");
        printf("4. funtion_strstr\n");
        printf("5. salir\n");
        printf("----------------------------------------\n");
        opcion = get_int("Ingresa una opcion: ");
    }
    while(opcion < 1 || opcion >5 );

    return opcion;
}

void funtion_strcpy(void)
{
    char cadena1[20] = "Hola mundo!!!";
    char cadena2[20];
    strcpy(cadena2,cadena1);

    printf("Lo que dice la cadena 1: %s \n",cadena1);
    printf("Lo que dice la cadena 2: %s \n",cadena2);


}

void funtion_strcmp(void)
{
    string s1 = get_string("s1: ");
    string s2 = get_string("s2: ");
    if (strcmp(s1, s2) == 0)
    {
        printf("Those are the same.\n");
    }
    else
    {
        printf("Those are different.\n");
    }
}


void funtion_strlen(void)
{
    string s = get_string("s: ");

    int longitud = strlen(s);

    printf("La longitud de la cadena: %s es de %i",s, longitud);

}

void funtion_strstr(void)
{
    string haystack = "FOO BAR BAR BAZ";
    string needle = "bar";

    string match = strstr(haystack, needle);
    if (match)
    {
        printf("%s\n", match);
    }
}