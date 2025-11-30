#include <stdio.h>

int main() {
    int numero;
    int soma = 0;

    while (1) {
        scanf("%d", &numero);
        if (numero == 0) {
            break;
        }
        if (numero % 2 != 0) {
            soma += numero;
        }
    }

    printf("%d\n", soma);
    return 0;
}
