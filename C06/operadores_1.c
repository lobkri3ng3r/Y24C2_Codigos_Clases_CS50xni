#include <stdio.h>
#include <cs50.h>

// Funcion principal
int main()
{
    // Instrucciones
    /* operadores relacionales
        <
        <=
        >
        <=
        = (asignar)
        ==
        !=
    */
   int n = 10;
   int m = 20;
   printf("Resultado n>m: %i \n",n>m);
   printf("Resultado n<m: %i \n",n<m);
   printf("Resultado n!=m: %i \n",n!=m);
   printf("Resultado n==m: %i \n",n==m);
   printf("Resultado n>=m: %i \n",n>=m);
   printf("Resultado n<=m: %i \n",n<=m);

   /*Operadores logicos*/
   /*
        Y O NO
        && || !
   */
  printf("------------------\n");
  int a = 10;
  int b = 30;
  int expresion1 = a < b && a != b;
  int expresion2 = a >= b || b >= a;
  int expresion3 = !(a < b);

  printf("Expresion 1: %i \n",expresion1);
  printf("Expresion 2: %i \n",expresion2);
  printf("Expresion 3: %i \n",expresion3);

}