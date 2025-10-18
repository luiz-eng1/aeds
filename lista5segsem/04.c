#include <stdio.h>
#include <string.h>
int main(){
    int tam, valido;
    char nomeusuario[50];


  do{
    printf("Você vai criar seu nome de usuario: \n");
        printf("Digite: ");
        fgets(nomeusuario, sizeof(nomeusuario), stdin);

        tam = strlen(nomeusuario);
        valido = 1;
        if(tam >= 5 && tam<= 15){
            printf("O tamanho está correto.");
        }else{
            printf("O tamanho não está correto. Deve ter entre 5 e 15 caracteres.");
            valido = 0;
        }

        for(int i = 0; i < tam && valido; i++){
            if(!(isalpha(nomeusuario[i]) || isdigit(nomeusuario[i]) || nomeusuario == '_' )){
                printf("Caractere invalido.");
                valido = 0;
            }
        }

        for(int i = 0; i < tam && valido; i++){
            if(!(isalpha(nomeusuario[0]))){
                printf("O primeiro caractere deve ser uma letra.");
                valido = 0;
            }
        }


        if(!valido){
            printf("Tente novamente.");
        }
  }while(!valido);

    printf("Nome de usuário: %s\n", nomeusuario);
    return 0;
}