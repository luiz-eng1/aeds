#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    float soma  = 0;
    float media = 0;
    printf("Digite a quantidade de numeros no vetor: ");
    scanf("%d", &n);

    

    // aloc dinamica
    int *numeros = malloc(n*sizeof(int));
    
    if(numeros == NULL){
        printf("Erro ao alocar memoria. ");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Digite o numero %d:", i +1);
        scanf("%d", &numeros[i]);
    }

    for(int i = 0; i < n; i++){
        soma += numeros[i];
    }

    media = soma/n;
    printf("A media dos numeros sera de %d", media);
    
    free(numeros);


    return 0;
}