//Crie uma função recursiva para calcular a^b (a elevado a b), com b inteiro e não negativo.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int elevado(int a, int b){
    if(b<0){
        printf("Tratamento de erro.");
        return -1;
    }

    if(b== 0){
        printf("Todo numero elevado a 0 é 1");
        return 0;
    }else {
        return a * elevado(a, b-1);
    }

}
int main(){
    int a, b;

    printf("Digite o valor de A:");
    scanf("%d", &a);

    printf("Digite o valor de B:");
    scanf("%d", &b);

    int potencia = elevado(a, b);

    if(potencia != -1){
        printf("%d elevado a %d  = %d", a, b, potencia);
    }

    return 0;

}