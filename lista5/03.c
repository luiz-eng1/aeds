#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencheValores(int x[10], int y[10]){
    for(int i=0; i<10; i++){
        x[i] = rand()% 11 + 10;
        printf("vetor[%d] = %d\n", i, x[i]);
    }

    for(int i=0; i<10; i++){
        y[i] = rand()% 11 + 10; // o 11 vai de 0  a 10 e dps adiciona + 10 que = 20
        printf("vetor[%d]= %d\n", i, y[i]);
    }
}

void intercala(int x[10], int y[10], int z[20]){
    int j=0;
    for(int i = 0; i<10; i++){
        z[j]= x[i];
        j++;

        z[j] = y[i];
        j++;
    }
}

void exibirVetor(int vetor[], int tamanho){
    for(int i = 0; i< tamanho; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }
}






int main(){
    srand(time(NULL));
    int x[10],  y[10],  z[20];


    preencheValores(x, y);
    intercala(x, y, z);

    printf("Vetor X: \n");
    exibirVetor(x, 10);

    printf("Vetor Y: \n");
    exibirVetor(y, 10);

    printf("Vetor Z: \n");
    exibirVetor(z, 20);
}