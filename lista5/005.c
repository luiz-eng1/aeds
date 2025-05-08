#include <stdio.h>
#include <string.h>



int verificaEmail(char email[]){
    int tamanho = strlen(email);
    for(int i = 0; i < tamanho; i++){
        if(email[i]=='@'){
            printf("possui caractere");
            return i;
            
            
        }
    
    }
    return -1;
}
int main(){
    int posicao;
    char email[30];
    printf("Digite seu email:");
    scanf("%s", email);

    posicao = verificaEmail(email);

    if(posicao != -1){
        printf("o caractere foi achado na posicao %d . Email valido", posicao);
    }else{
        printf("o caractere nao foi encontrado. Email nao valido");
    }
}