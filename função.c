/*Esse é a função, com retorno*/

#include <stdio.h>

int somar(int num1, int num2){
    int soma = num1 + num2;
    return soma;
}

int subtrair (int num1, int num2){
    int subtracao = num1 - num2;
    return subtracao;
}

int multiplicar(int num1, int num2){
    int multiplicacao = num1*num2;
    return multiplicacao;

}

int dividir(int num1, int num2){
    float divisao = num1/num2;
    return divisao;
}

int menu(){
    int opcao;
    printf("Escolha uma opcao [1] soma [2] subtracao [3] multiplicacao [4]divisao");
    scanf("%d", &opcao);
    
}

int main(){

    int a,b, resultado, opcao;
    printf("Digite o primeiro valor:");
    scanf("%d", &a);
    printf("Digite o segundo valor");
    scanf("%d", &b);
    opcao = menu();
    switch (opcao)
    {
    case 1:
        resultado = somar(a,b);
        printf("O resultado sera %d", resultado);
        break;
    case 2:
        resultado = subtrair(a, b);
        printf("O resultado sera %d", resultado);
        break;
    case 3:
        resultado = multiplicar(a,b);
        printf("O resultado sera %d", resultado);
        break;
    case 4:
        resultado = dividir(a,b);
        printf("O resultado sera %d", resultado);
        break;

    default:
        break;
    }
}