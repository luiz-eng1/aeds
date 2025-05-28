#include <stdio.h>

#define MAX_LINHAS 30
#define MAX_COLUNAS 30
int main(){
    int n, m;
    int matriz[MAX_LINHAS][MAX_COLUNAS];
    int busca;
    int encontrado =0;
    

    printf("Insira o numero de linhas (MAX %d):", MAX_LINHAS); // numero de linhas da matriz
    scanf("%d", &n);

    printf("Insira o numero de colunas (MAX %d):", MAX_COLUNAS); // numero de colunas da matriz
    scanf("%d", &m);


    if(n> MAX_LINHAS || m > MAX_COLUNAS || n<= 0 || m<= 0){
        printf("TAMANHO INVALIDO DA MATRIZ");
        return 1;
    }


    printf("Insira agora os elementos da matriz:");

    for(int i = 0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("Elementos[%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Me diga o elemento que você busca:");
    scanf("%d", &busca);


    for(int i = 0; i< n; i++){
        for(int j = 0; j<m; j++){
            if(matriz[i][j]== busca){
                printf("O numero %d foi encontrado na posição [%d][%d]", busca, i, j);
                encontrado =1;
            }
        }
    }

    if(!encontrado){
        printf("O numero %d nao foi encontrado", busca);
        
    }


return 0;
}