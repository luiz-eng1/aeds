#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, resp, novoN;
    printf("Quantos numeros no vetor? ");
    scanf("%d", &n);

    int *numeros = malloc(n*sizeof(int));

    if(numeros == NULL){
        printf("Erro ao alocar memoria.");
        return 1;
    }

    for(int i = 0; i < n; i++){
        printf("Digite o numero %d:", i+1);
        scanf("%d", &numeros[i]);
    }

    printf("Você quer realocar o vetor? [0] Não [1] Sim ");
    scanf("%d", &resp);

    if(resp == 0){
        printf("Você não quer realocar. Terminando programa...");
        free(numeros);
        return 1;
    }else{
        printf("Qual o novo tamanho do vetor? ");
        scanf("%d", &novoN);

        realloc(numeros, novoN*sizeof(int));

        for(int i = 0; i < novoN; i++){
            printf("Digite o numero %d do vetor: ", i+1);
            scanf("%d", &numeros[i]);
        }
    }

    printf("O vetor na versão final e: ");
    for(int i = 0; i < novoN; i++){
        printf("%d", numeros[i]);
    }
    printf("\n");

    free(numeros);
    return 0;
}