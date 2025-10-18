#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* inverteString(char *original) {
    int tam = strlen(original);
    char *invertida = (char*) malloc((tam + 1) * sizeof(char)); 
    
    for (int i = 0; i < tam; i++) {
        invertida[i] = original[tam - 1 - i];
    }
    invertida[tam] = '\0'; 
    
    return invertida;
}

int main() {
    char texto[100];

    printf("Digite uma string: ");
    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; 

    char *resultado = inverteString(texto);
    printf("String invertida: %s\n", resultado);

    free(resultado); // libera memoria
    return 0;
}
