#include<stdio.h>
#include<string.h>
#include<cs50.h>

int main(int argc, string argv[] ){
    string texto;
    texto = get_string("Escribe algo> ");

    if(argc < 2){
        printf(":c\n");
        return 1;
    } else {
        for(int i = 0; i < strlen(texto); i++){
            if(texto[i] == 'a'){
                texto[i] = argv[1][1];
            }
        }
    }

    printf("%s\n",texto);
    return 0;
}