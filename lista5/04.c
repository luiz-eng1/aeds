#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char senha [30];
    int teste = 1;   // flag para senha valida ou nao
    int temMinuscula = 0, temMaiuscula = 0, temEspecial = 0, temNumero = 0;  // flags
    printf("Digite sua senha:");
    scanf("%s", senha);

    if(strlen(senha) >= 8){  // verifica se a senha tem menos que 8 caracteres
        printf("A senha tem mais de 8 caracteres ✔  \n ");
    }else{
        printf("A SENHA NAO EH VALIDA, adicione pelo menos 8 caracteres."); 
        teste = 0;
    }


    for(int i = 0 ; i < strlen(senha); i++ ){
        if( islower(senha[i])) temMinuscula = 1;
        else if(isupper(senha[i])) temMaiuscula = 1;
        else if(isdigit(senha[i])) temNumero = 1;
        else if(!isalnum(senha[i])) temEspecial = 1;
        }
    





    if(temMinuscula){
        printf("A senha tem pelo menos 1 letra minuscula.OK \n");

        
    }else{ 
        printf("A senha nao possui nenhuma letra minuscula. Adicione pelo menos 1 letra minuscula.\n");
        teste = 0;
    }
        
    if(temMaiuscula){
        printf("A senha tem pelo menos 1 letra maiuscula.OK  \n");
    }else{
        printf("A senha nao possui nenhuma letra maiuscula. Adicione pelo menos 1 letra maiuscula.\n");
        teste = 0;
    }


    if(temNumero){
        printf("A senha tem pelo menos um numero.OK  \n");
    } else{
        printf("A senha nao possui nenhuma numero. Adicione pelo menos um numero.\n");
        teste = 0;
    }

    if(temEspecial){
        printf("A senha tem pelo menos um caractere especial.OK\n");
    }else{
        printf("A senha nao possui nenhum caractere especial. Adicione pelo menos um caractere especial.\n");
        teste = 0;
    }


if(teste){
    printf("A senha e valida");
}else{
    printf("A senha nao e valida");
}
 
}