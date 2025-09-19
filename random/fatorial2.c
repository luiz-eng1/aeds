#include <stdio.h>

int main(){
    int numero, fatorial = 1;
    printf("Digite um numero");
    scanf("%d", &numero);

    for(int i = 1; i <= numero; i++){
        fatorial = fatorial * i;
    }
    
    printf("O fatorial do numero %d eh %d", numero, fatorial);
    return 0;
}