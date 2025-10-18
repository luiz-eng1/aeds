#include <stdio.h>
#include <string.h>

#define TAM 128

int main() {
    char P[101], A[101];
    int freqP[26] = {0}, freqA[26] = {0};
    int i, asteriscos = 0;

    // Leitura das palavras
    scanf("%s", P);
    scanf("%s", A);

    int len = strlen(P);

    // Contagem de letras em P
    for (i = 0; i < len; i++) {
        freqP[P[i] - 'a']++;
    }

    
    for (i = 0; i < len; i++) {
        if (A[i] == '*') {
            asteriscos++;
        } else {
            freqA[A[i] - 'a']++;
        }
    }

    // ve se A pode ser um anagrama curinga de P
    int falta = 0;
    for (i = 0; i < 26; i++) {
        if (freqA[i] > freqP[i]) {
            
            printf("N\n");
            return 0;
        }
        falta += freqP[i] - freqA[i];
    }

    if (falta == asteriscos) {
        printf("S\n");
    } else {
        printf("N\n");
    }

    return 0;
}
