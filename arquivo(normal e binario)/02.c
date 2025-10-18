#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;

    int numeros[10];
    arquivo = fopen("arquivo.txt", "w");

    if(arquivo == NULL){
        printf("Houve um erro na abertura do arquivo:");
        return 1;
    }

    for(int i = 0; i<10;i++){
        fprintf(arquivo, "%d \n", i );
    }

    
    
    fclose(arquivo);
    return 0;
}