//OBJETIVO: ler N números inteiros fornecidos pelo usuário, 
//armazená-los dinamicamente, calcular e exibir a média.



#include <stdio.h>
#include <stdlib.h>

int main(){
int  n, *ptr;
int soma = 0;
float media;
printf("Quantos números irá digitar?");
scanf("%d", &n);

ptr = (int*) malloc(n * sizeof(int));



// verificação de erro de alocacao
if(ptr == NULL){
    printf("Erro de alocacao!");
    return 1;
}
// leitura dos numeros

for(int i = 0; i< n; i++){
    printf("Digite o numero %d", i+ 1);
    scanf("%d", &ptr[i]);
}
// calculo da soma
for(int i = 0; i< n; i++){
    soma += ptr[i];
}



media = soma/n;
printf("A media dos numeros digitados é: %f", media);
free(ptr);
return 0;


}






