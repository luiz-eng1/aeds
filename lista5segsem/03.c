#include <stdio.h>
void preenchevetor(int vetor1[], int vetor2[]){
    for(int i = 0; i < 5; i++ ){
        printf("Digite o %d do vetor:", i+1);
        scanf("%d", &vetor1[i]);
    }

    for(int i = 0; i < 5; i++ ){
        printf("Digite o %d do vetor:", i+1);
        scanf("%d", &vetor2[i]);
    }
}


void terceirovetor(int vetor1[], int vetor2[], int vetor3[]){
    for(int i = 0; i < 5; i++){
        vetor3[i] = vetor1[i];
    }

    for(int i = 0; i < 5; i++){
        vetor3[i + 5] = vetor2[i];
    }
    
     for(int i = 0; i < 10; i++){
        printf("%d", vetor3[i]);
    }
    printf("\n");
}

int main(){
    int Pvetor[5], Svetor[5], Tvetor[10];


    preenchevetor(Pvetor, Svetor);
    terceirovetor(Pvetor, Svetor, Tvetor);

    return 0;
}