#include <stdio.h>
#include <string.h>
#include <ctype.h>



int maiusculo(char vetor[50]){
    char tm[50];
    toupper(vetor);
    strcat(tm, vetor);
    return strcat;
}
int main(){
    char vetor[50];
    char tm[50];
    int resultado;
    printf("Digite uma frase:");
    scanf("%s", vetor);

    resultado = maiusculo(vetor);
    printf(resultado);
}