#include <stdio.h>

int main(){
    int a, b, opcao;
    int soma, multiplicacao;
    printf("Digite o primero numero:");
    scanf("%d", &a);

    printf("Digite o segundo numero");
    scanf("%d", &b);

    printf("escolha uma opção do menu: [1]soma [2]multiplicar [3]maior [4]novos numeros [5]sair do programa");
    scanf("%d",opcao);
switch (opcao)
{
case 1:
    soma = a+b;
    printf("A soma dos dois numeros é %d", soma);
    break;
case 2:
    multiplicacao = a*b;
    printf("A multiplicacao dos dois numeros é %d", multiplicacao);
    break;
case 3:
    if(a>b){
        printf("O numero %d é maior que %d", a, b);
    }else{
        printf("O numero %d é maior que o %d", b, a);
    }
case 4:
    printf("escolha novos numeros");
    break;
case 5:
    break;



default:
    break;
}

}