#include <stdio.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));

    int tamanho= rand() % 16 + 5;
    int vetor[tamanho];
    int quantidade= 0, maior;
    float media;

    for(int i = 0; i<tamanho; i++){
        vetor[i]= rand()%100;
        printf("vetor[%d] = %d\n", i, vetor[i]);
        
    }

    for(int i = 0; i<tamanho; i++){
        quantidade += vetor[i];
        vetor[i]++;
    }

printf("%d", quantidade);
media = quantidade/tamanho;
printf("%f", media);
return 0;
    
}