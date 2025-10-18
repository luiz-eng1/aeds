#include <stdio.h>

void preenchevetor(int vetor1[10], int vetor2[10]){


    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero para preencher o vetor: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("Digite o %d numero para preencher o vetor: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    
}

void vetorresultante(int vetor3[10], int vetor1[10], int vetor2[10]){

    for(int i = 0; i < 10; i++){
        vetor3[i] = vetor1[i] + vetor2[i];
    }

}

int main(){
    int Pvetor[10], Svetor[10], Tvetor[10];

    preenchevetor(Pvetor, Svetor);

    vetorresultante(Tvetor, Pvetor, Svetor);

    for(int i = 0; i < 10; i++){
        printf(" %d", Tvetor[i]);
    }
    printf("\n");
    return 0;
}