// funcion principal

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    // char a[] = "holi";
    // char b[] = "holi";

    string a = "mango";
    char b [strlen(a)];

    strcpy(b,a);

    printf("A: %s\n", a);
    printf("B: %s\n", b);

    return 0;
}
