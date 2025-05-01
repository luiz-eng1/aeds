// quase acertei essa questão, mas não entendi muito bem a correção
// o  erro está na funcao!!

#include <stdio.h>
#include <math.h>
int funcao(int s, int n){
    s = (pow(n, 2) +1)/(n+3); //isso nao funciona bem como esperavamos
    return s;
}


int main(){
    int n, s;
    printf("Digite o numero N:");
    scanf("%d", &n);

    s = funcao(0, n);
    printf("O valor de S é igual a %d", s);
return 0;
}



