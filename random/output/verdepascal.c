#include <stdio.h>

void imprimirPascal(int n) {
    int pascal[n][n]; 

    // Construção do triângulo
    for (int i = 0; i < n; i++) {
        pascal[i][0] = 1; 
        pascal[i][i] = 1; 
        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
    }

    //triângulo
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", pascal[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    imprimirPascal(n);
    return 0;
}
