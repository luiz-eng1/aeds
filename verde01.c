#include <stdio.h>

int main(){
    int numero;

    printf(" ");
    scanf("%d", &numero);

    if(numero % 2 == 0){
        printf("par");
    }else{
        printf("impar");
    }

    return 0;
}