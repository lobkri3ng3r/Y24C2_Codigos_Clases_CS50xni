#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *s = malloc(4);

    printf("s: ");
    scanf("%4s",s);

    printf("s: %s\n",s);

    free(s);
}

