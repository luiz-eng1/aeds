#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_TAMANHO 100

int main() {
    char strings[MAX_STRINGS][MAX_TAMANHO];
    int n;
    int maiortamanho = 0;
    int maiorlex = 0;

    printf("Quantas frases deseja digitar? ");
    scanf("%d", &n);
    getchar(); 

    for (int i = 0; i < n; i++) {
        printf("Digite sua frase: ");
        fgets(strings[i], MAX_TAMANHO, stdin);

     
        int len = strlen(strings[i]);
        if (strings[i][len - 1] == '\n') {
            strings[i][len - 1] = '\0';
        }
    }

    
    

    for (int i = 1; i < n; i++) {
        if (strlen(strings[i]) > strlen(strings[maiortamanho])) {
            maiortamanho = i;
        }

        if (strcmp(strings[i], strings[maiorlex]) > 0) {
            maiorlex = i;
        }
    }

    
    printf("%s\n", strings[maiortamanho]);
    printf("%s\n", strings[maiorlex]);

    return 0;
}
