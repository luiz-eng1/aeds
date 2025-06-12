// Implemente uma função recursiva que receba um número n e retorne a soma dos n primeiros números naturais.

#include <stdio.h>
#include <stdlib.h>


int somaNaturais(int n){

    int soma =0;
    if(n < 0){
        printf("Tratamento de erro.");
        return -1;
    }


    if(n == 0){
        return 0;
    }else{
        return n + somaNaturais(n-1);
    }
    
}


int main(){
    int n;
    int soma = 0;

   


    printf("Digite o numero N:");
    scanf("%d", &n);

    int resultado = somaNaturais(n);

    if(resultado != -1){
        printf("A soma dos numeros naturais antecessores do numero %d e %d", n, resultado);
    }
    return 0;
}