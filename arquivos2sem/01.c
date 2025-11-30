#include <stdio.h>

int main(){
    char nome[50];
    int idade;


    FILE *arquivo;
    arquivo = fopen("pessoas.txt", "w");

    if(arquivo == NULL){
        printf("Falha na criação do arquivo.");
        return 1;
    }

    for(int i = 0; i < 3; i++){
        printf("Digite o %d nome:\n ", i+1);
        scanf("%s", nome);

        printf("Digite a %d idade: \n", i+1);
        scanf("%d", &idade);

        fprintf(arquivo, "Nome: %s , Idade: %d\n", nome, idade);
    }

    fclose(arquivo);


    //abrir novamente para leitura

    arquivo = fopen("pessoas.txt", "r");
    if(arquivo == NULL){
        printf("Falha na abertura do arquivo.");
        return 1;
    }

    printf("--- Conteúdo do arquivo --- ");
    while(fscanf(arquivo ,"Nome: %s, Idade: %d", nome, &idade) != EOF){
        printf("Nome: %s | Idade: %d\n", nome, idade);

    }

    fclose(arquivo);
    return 0; 
}