#include <stdio.h>

int main(){
    /*
    int a, b, soma;

    printf("Digite o numero A:");
    scanf("%d", &a);

    printf("Digite o numero B:");
    scanf("%d", &b);

    soma = a+b;
    printf("A soma dos dois numeros e %d", soma);
    */

    int media = 60;
    float notaaluno;

    printf("Digite a nota do aluno: ");
    scanf("%f", &notaaluno);
    if(notaaluno > media){
        printf("O aluno esta aprovado");
    }else{
        printf("O aluno esta reprovado.");
    }
    return 0;
}