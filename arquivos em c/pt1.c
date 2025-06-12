//Crie um programa que peça ao usuário o nome e a idade, e grave essas informações no arquivo pessoas.txt
// depois mostrar no terminal
#include <stdio.h>
#include <stdlib.h>

int main(){
    char nome[100];
    int idade;
    FILE *pessoas;


    printf("Digite seu nome:");
    fgets(nome, sizeof(char), stdin );

    printf("Digite sua idade:");
    scanf("%d", &idade);

    pessoas = fopen("pessoas.txt", "w");

    if(pessoas == NULL){
        printf("Erro na criação do arquivo. Tente novamente");
        return 1;
    }

    fprintf(pessoas, "Nome: %s  Idade: %d\n", nome, idade);

    fclose(pessoas);


// agora, para mostrar no terminal

pessoas = fopen("pessoas.txt", "r");
if(pessoas == NULL){
    printf("Abertura para leitura mal sucedida. Tente novamente");
    return 1;
}

fscanf(pessoas, "Nome: %s  Idade: %d", nome, &idade);
printf("Nome: %s Idade: %d", nome, idade);

fclose(pessoas);


    return 0;

}