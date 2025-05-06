#include <stdio.h>



void preencheNotas(int tam, int vetor[]){
    
    for(int i=0;i<tam; i++){
        printf("Digite o valor da nota %d:", i+1);
        scanf("%d", &vetor[i]);
    }
}


void calculaMedia (int tam, int vetor[]){
    int acimamedia = 0;
    int soma=0, contador = 0;
    
    for(int i=0; i<tam; i++){
        soma += vetor[i];
    }
float media = (float)soma/tam;

for(int i = 0; i<tam;i++){
    if(vetor[i]>media){
        contador++;
    }
}
printf(" A media da turma foi %f e a quantidade de alunos foi %d", media, contador);
}
int main(){
    int vetor[100];
    int tam;
    printf("Quantos alunos são?");
    scanf("%d", &tam);

    preencheNotas(tam, vetor);
    calculaMedia(tam, vetor);
}