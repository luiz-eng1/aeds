

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n = 1;
    char tamanho = 100;
    char ptr*;

    ptr = (char**)malloc(tamanho*sizeof(char));

    if(ptr == NULL){
        printf("Alocação mal sucedida.");
        return 1;
    }

    printf("Digite suas palavras. 'sair' para encerrar o programa.").
    for(int i = 0; i < n; i++){
        if(strcmpr(ptr[i]== 'sair')){
            break;
        }

        printf("Digite as palavras:");
        fgets(ptr[i], sizeof(tamanho), stdin);
    }

    ptr = realloc(tamanho*sizeof(char));

    free(ptr);
    return 0;
}