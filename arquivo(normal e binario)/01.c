#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arquivo;
    char frase[100];

    arquivo = fopen("arquivo.txt", "w+");

    if(arquivo == NULL){
        printf("Houve um erro ao abrir o arquivo");
        return 1;
    }

    printf("Digite uma frase:");
    gets( frase);

    fprintf(arquivo, "%s", frase);

    fclose(arquivo);
    return 0;
}