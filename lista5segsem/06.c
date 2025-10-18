#include <stdio.h>
#include <string.h>
#include <ctype.h>

void letraMaisFrequente(char texto[]) {
    int frequencia[256] = {0}; // conta todos os caracteres
    int i;
    char mais = '\0';
    int max = 0;

    for (i = 0; texto[i] != '\0'; i++) {
        char c = tolower(texto[i]); // transforma em letra minuscula
        if (isalpha(c)) { 
            frequencia[(unsigned char)c]++;
            if (frequencia[(unsigned char)c] > max) {
                max = frequencia[(unsigned char)c];
                mais = c;
            }
        }
    }

    if (mais)
        printf("A letra que mais aparece é '%c', aparecendo %d vezes.\n", mais, max);
    else
        printf("Nenhuma letra foi digitada.\n");
}

int main() {
    char texto[200];
    printf("Digite um texto: ");
    fgets(texto, sizeof(texto), stdin);

    letraMaisFrequente(texto);
    return 0;
}
