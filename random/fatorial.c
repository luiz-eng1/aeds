#include <stdio.h>

int main(){
    int a, fatorial=1;
    printf("Digite o numero:");
    scanf("%d", &a);

    int i = a;
    while(i>1){
        fatorial *= i;
        i--;
    }
    printf("o fatorial do numero e %d", fatorial);
return 0;
}