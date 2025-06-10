//Ler n inteiros com malloc, depois aumentar o vetor para 2n usando realloc e ler mais n inteiros.

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    int *ptr;

    printf("Quantos numeros ira digitar ?");
    scanf("%d", &n);

    ptr = (int*)malloc(n*sizeof(int));

    //verificação
    if(ptr == NULL){
        printf("Alocaçao dinamica mal sucedida.");
        return 1;
    }

    // leitura dos numeros
    for(int i = 0; i < n; i++){
        printf("Digite o numero %d:", i+1);
        scanf("%d", &ptr[i]);
    }
    int novo_n = n *2;
    int *temp= realloc(ptr, novo_n*sizeof(int));

    if(temp == NULL){
        free(ptr);
        printf("Realocação mal sucedida.");
        return 1;
    }

    ptr = temp;

      // Leitura dos próximos n números
    for (int i = n; i < novo_n; i++) {
        printf("Digite o numero %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }

    // Impressão dos 2n números
    printf("\nTodos os %d números digitados:\n", novo_n);
    for (int i = 0; i < novo_n; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    free(ptr);
    return 0;

}