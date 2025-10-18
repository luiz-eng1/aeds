#include <stdio.h>
#include <string.h>

#define MAX_N 20000
#define MAX_LEN 11 

int main() {
    int N;
    char senhas[MAX_N][MAX_LEN];
    int i, j, count = 0;

    // Leitura do número de usuários
    scanf("%d", &N);

    // Leitura das senhas
    for (i = 0; i < N; i++) {
        scanf("%s", senhas[i]);
    }

    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i != j) {
                if (strstr(senhas[i], senhas[j]) != NULL) {
                    count++;
                }
            }
        }
    }

    
    printf("%d\n", count);

    return 0;
}
