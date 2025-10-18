//Escreva um procedimento que receba quatro notas de um estudante e um caractere. Se o
//caractere for 'M', calcule e mostre a média aritmética. Se for 'W', calcule a média ponderada, com
//pesos 4, 3, 2 e 1. O programa principal deve ler os dados de vários alunos (até que seja digitada
//uma nota negativa) e chamar o procedimento.

#include <stdio.h>
#include <ctype.h>
void media(float a, float b, float c, float d, char letra){
    float mediaart = 0;
    float mediapond = 0;
    letra = toupper(letra);
    if(letra == 'M'){
        mediaart = (a+b+c+d)/4;
        printf("A media aritmetica das notas eh %f", mediaart);
    }else{
        a = a*4;
        b = b*3;
        c = c*2;

        mediapond = (a+b+c+d)/10;
        printf("A media ponderada eh %f", mediapond);

    }

}
int main(){
    float notaA, notaB, notaC, notaD;
    char letra;
    float mediaart = 0;
    float mediapond = 0;


    printf("Digite o caractere (W ou M): ");
    scanf("%c", &letra);


    do{
        printf("Digite a nota: ");
        scanf("%f", &notaA);

        printf("Digite a nota: ");
        scanf("%f", &notaB);

        printf("Digite a nota: ");
        scanf("%f", &notaC);

        printf("Digite a nota: ");
        scanf("%f", &notaD);

        media(notaA, notaB, notaC, notaD, letra);

    }while( notaA > 0 && notaB > 0 && notaC > 0 && notaD > 0);

    

    return 0;
}