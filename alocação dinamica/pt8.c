//Alocar um vetor de notas (float), calcular a média e exibir os valores acima da média.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float *notas;
    float media, soma;
    printf("Quantas notas ira digitar?");
    scanf("%d", &n);

    notas = (float *)malloc(n*sizeof(float));

    for(int i = 0; i < n; i++){
        printf(" Digite a nota %d", i+ 1);
        scanf("%f", &notas[i]);
    }
    for(int i = 0; i < n; i++){
        soma += notas[i];
    }
    media = soma/n;

    for(int i = 0; i < n; i++){
        if(notas[i] > media){
        printf("%.2f", notas[i] );

    }
    }

    free(notas);
    return 0;
}