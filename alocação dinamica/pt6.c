// Alocar um vetor de inteiros dinamicamente, ler n valores do usuário e imprimir a soma.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int n, soma = 0;
    int *ptr;
    printf("Quantos numeros irá digitar?");
    scanf("%d", &n);

    ptr = (int *)malloc(n*sizeof(int));

    if(ptr == NULL){
        printf("Alocação mal sucedida.");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Digite o numero %d", i+1);
        scanf("%d", &ptr[i]);
        soma += ptr[i];
    }

    printf("A soma do vetor ptr e %d", soma);
    free(ptr);

    return 0;
}