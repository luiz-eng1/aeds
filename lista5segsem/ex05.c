#include <stdio.h>
#include <string.h>

char* corpoURL(char url[]) {
    static char corpo[100]; 
    memset(corpo, 0, sizeof(corpo)); 

    if (strncmp(url, "http://", 7) == 0) {
        strcpy(corpo, url + 7);  // pula o http://
    } else if (strncmp(url, "https://", 8) == 0) {
        strcpy(corpo, url + 8);  // pula  o https://
    } else {
        corpo[0] = '\0'; //  vai retorna string vazia
    }

    return corpo;
}

int main() {
    char url[100];

    printf("Digite a URL: ");
    scanf("%s", url);

    char *resultado = corpoURL(url);

    if (strlen(resultado) > 0)
        printf("Corpo principal: %s\n", resultado);
    else
        printf("URL inválida (não começa com http:// ou https://)\n");

    return 0;
}
