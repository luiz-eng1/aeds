//Crie uma struct Aluno com nome[50] e nota (float). Leia os dados do usuário e grave no arquivo binário alunos.dat.

#include <stdio.h>
#include <stdlib.h>

struct Aluno{
        char nome[100];
        float nota;
    };

int main(){
    

    FILE *arquivo;

    arquivo = fopen("alunos.dat", "wb");
    if(arquivo == NULL){
        printf("Erro na abertura do arquivo.");
        return 1;
    }

    struct Aluno p;

    printf("Digite o nome do aluno:");
    fgets(p.nome, sizeof(p.nome), stdin);

    printf("Digite a nota:");
    scanf("%d", &p.nota);

    fwrite(&p, sizeof(struct Aluno), 1, arquivo);

    fclose(arquivo);

// agora para ler no terminal

arquivo = fopen("alunos.dat", "r+");
if(arquivo == NULL){
    printf("Erro na abertura do arquivo.");
    return 1;
}

    fread(&p, sizeof(struct Aluno), 1, arquivo);
    fclose(arquivo);
    return 0;
}