#include <stdio.h>


int main(){
    int a, b;
    printf("Digite o primeiro numero:");
    scanf("%d", &a);

    printf("Digite o segundo  numero:");
    scanf("%d", &b);

    if(a>b){
        printf("%d é maior que %d!", a, b);
    }else{
        printf("%d é maior que %d", b,a);
    }
}