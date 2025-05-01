#include <stdio.h>

int funcao(float e, int n){
    
    int soma_e, fatorialden=1;
    for(int i = 0; i <= n; i++){

        for(int j=1; j<=n; j++){      // essa
            fatorialden *= j;       // é nossa 
        }                           // fatorial
        
        e =  1/fatorialden;
        soma_e += e;

    }
e = e+1;

return e;
}
int main(){
    int   n;
    float e;
    printf("Digite o numero N:");
    scanf("%d", &n);

    e = funcao(0, n);
    printf("%d", e);
}