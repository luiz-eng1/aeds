#include <stdio.h>



float equacao(int n ){
    double S = 0.0;
    for(int i = 0; i < n; i++){
        S = i+2 / i+4;
        printf("%d", S);
    }

    return S;
}
int main(){
    int n;
    
    printf("Digite o numero N: ");
    scanf("%d", &n);

    double S = equacao(n);

    return 0;
}