// Librerias
#include <stdio.h>
#include <cs50.h>

// tipop_retorno + nombre + parametros
/* int double float char string void*/


// sin retorno y sin parametro
void hola(void);
// sin retorno y con parametro
void suma(int n, int m);
// con retorno y sin parametro
int resta(void);
// con retorno y con parametro
int multiplicacion(int n, int m);

// Principal
int main()
{
    // for(int i = 0; i < 3; i++)
    // {
    //     hola();
    // }
    // suma(50,30);
    // int resultado = resta();
    // printf("resultado: %i\n",resta());
    int numero1 = get_int("Numero1: ");
    int numero2 = get_int("Numero2: ");
    int result = multiplicacion(numero1,numero2);
    printf("Resultado: %i\n",result);
}

void hola(void)
{
    // Instruccion
    printf("Hola\n");
}

void suma(int n, int m)
{
    int suma = n + m;
    printf("La suma es: %i \n",suma);

}

int resta(void)
{
    int n = 30;
    int m = 80;
    int resta = n - m;

    return resta;
}

int multiplicacion(int n, int m)
{
    // int multi = n * m;

    return n*m;
}
