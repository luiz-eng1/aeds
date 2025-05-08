/*
#include <stdio.h>
int main(){
    int matriz[2][3];
    int r[2][3];
    int maior = 0;

    printf("Digite os elementos da matriz (6numeros):");
    for(int i=0;i<3; i++){
        for(int j=0;j<2;j++){
            printf("Elementos", i, j);
            scanf("%d", &matriz[i][j]);

            if( i== 0 && j==0 || matriz[i][j]> maior){
                maior = matriz[i][j];
            }
        }
    }
}*/




#include <stdio.h>



int main(){
    int matriz[5][10];
    int soma[5];
    int newmatriz[5][10];

    printf("Digite os elementos da matriz 5x10:\n");

    for(int i=0; i<5;i++){
        for(int j=0; j<10;j++){                 // esse FOR cria a matriz
            printf("Elemento [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
            
        }
    }

for(int i=0; i<5; i++){
    soma[i] = 0;
    for(int j=0; j<10; j++){                //esse é a soma das linhas
        soma[i] += matriz[i][j];
    }
}
  

for(int i=0; i<5; i++){
    for(int j=0; j<10; j++){                // multiplicação das linhas pela matriz
       newmatriz[i][j] = soma[i] * matriz[i][j];
       printf("Matriz nova %d", newmatriz[i][j]);
    }
}



}
