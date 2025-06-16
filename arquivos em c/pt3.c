//Converter arquivo de texto para binário

#include <stdio.h>
#include <stdlib.h>

struct Pessoa{
        char nome[50];
        int idade;
    }primeirap, segundap;

int main(){
    FILE *arquivo;

    arquivo = fopen("pessoas.txt", "w");

    
    printf("Digite o nome primeira pessoa:");
    fgets(primeirap.nome, sizeof(primeirap.nome), stdin );

    printf("Digite a idade:");
    scanf("%d", &primeirap.idade);

    getchar();
    printf("Digite o nome da segunda pessoa:");
    fgets(segundap.nome, sizeof(segundap.nome), stdin);

    printf("Digite a idade:");
    scanf("%d", &segundap.idade);

    fprintf(arquivo, "%s | %d\n", primeirap.nome, primeirap.idade);
    fprintf(arquivo, "%s | %d", segundap.nome, primeirap.idade);

    fclose(arquivo);

    FILE *texto = fopen("pessoas.txt", "r");
    FILE *binario = fopen("pessoas.bin", "wb");
    
    fscanf(arquivo, "%s %d", primeirap.nome, &primeirap.idade);
    fscanf(arquivo, "%s, %d", segundap.nome, &segundap.idade);

    
    fwrite(*primeirap, sizeof(struct Pessoa), 1, arquivo);

    fclose(arquivo);
    return 0;

}