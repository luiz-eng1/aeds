//binario

#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;

    if((arquivo = fopen("arquivo.txt", "wb")) == NULL){
        printf("Erro na abertura do arquivo");
        return 1;
    }

    for(int i = 0; i<10; i++){
        fwrite(&i, sizeof(int), 1, arquivo);
    }

    fclose(arquivo);

    if((arquivo = fopen("arquivo.txt", "rb")) == NULL){
        printf("Erro na abertura do arquivo.");
        return 1;
    }

    fclose(arquivo);
    return 0;
}