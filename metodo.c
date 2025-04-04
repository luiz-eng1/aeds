/*Esse é o método sem retorno*/

#include <stdio.h>

void somar (int num1, int num2){
    int soma = num1 + num2;
    printf("A soma dos numeros é %d", soma);
}



void subtrair(int num1, int num2){
    int subtracao = num1-num2;
    printf("A subtracao dos numeros é %d", subtracao);
}




void multiplicar(int num1, int num2){
    int multiplicacao = num1*num2;
    printf("A multiplicacao dos numeros é %d", multiplicacao);
}

void dividir(int num1, int num2){
    float divisao = (float)num1/num2;
    printf("A divisao dos numeros é %f", divisao);
}

void menu(){
    printf("Escolha uma das opcoes [1] soma [2] subtracao [3] multiplicacao [4] divisao");
}

int main(){

    int a,b,opcao;
    printf("Digite o primeiro numero:");
    scanf("%d", &a);
    printf("Digite o segundo numero:");
    scanf("%d", &b);

    menu();
    scanf("%d", &opcao);
    switch(opcao)
    {
    case 1:
        somar(a,b);
        break;
    case 2:
        subtrair(a,b);
        break;
    case 3:
        multiplicar(a,b);
        break;
    case 4:
        dividir(a, b);
        break;
    default:
        break;
    }


return 0;
}