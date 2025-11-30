#include <stdio.h>
int main(){
    int matriz[4][4];
    int maior;
    int colunaMaior = 0, linhaMaior = 0; 

    for(int i = 0; i < 4; i++){
        for(int j =0 ; j < 4; j++){
            printf("matriz[%d][%d]", i , j);
            scanf("%d", &matriz[i][j]);
        }
    }   

    //descobrindo o maior elemento
    maior = matriz[0][0];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){

            if(matriz[i][j] > maior)  {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
        }
    }

    printf("Maior elemento: %d ", maior);
    printf("\n");
    printf("Linha: %d , Coluna: %d", linhaMaior +1, colunaMaior+1);
    return 0;
}