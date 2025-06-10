// Ler uma palavra de até 100 caracteres, alocar espaço com malloc e contar quantas letras tem.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *palavra;
    int tamanho = 100;
    int contador = 0;

    printf("Digite sua palavra:");
    fgets(palavra, sizeof(palavra), stdin);

    palavra = (char*)malloc(tamanho*sizeof(char));

    if(ptr = NULL){
        printf("Erro na alocação dinamica.");
        return 1;
    }

    int i = 0;
    while(palavra[i] != '\0'){
        if(palavra [i] == '\n'){
            palavra[i] = '\0';
            break;
        }
        i++;
    }
    

    while(palavra[i] != '\0'){
        if(isalpha(palavra[i])){
            contador++;
        }
        i++;
    }

printf("A palavra tem %d letras", contador);
free(palavra);

return 0;
}