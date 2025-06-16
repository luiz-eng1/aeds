// Faça uma função recursiva que calcule a soma dos dígitos de um número inteiro positivo.

#include <stdio.h>
#include <stdlib.h>


int somaDigitos(int n){

    if(n < 10){
        printf("Tratamento de erro");
        return n;
    }else{
        return (n%10) + somaDigitos(n/10);
    }
}


int main(){

    int n, resultado;

    printf("Digite o numero N:");
    scanf("%d", &n);

    resultado = somaDigitos(n);

    printf("O numero digitado foi %d e  a soma dos algarismos e %d", n, resultado);

    return 0;

}