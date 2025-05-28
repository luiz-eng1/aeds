#include <stdio.h>
#include <string.h>
#include <ctype.h> 

int main() {
  int linhas, i, j, espacos;
  

  // Solicita ao usuário o número de linhas da árvore
  printf("Digite o número de linhas da árvore: ");
  scanf("%d", &linhas);

  // Laço para iterar sobre cada linha da árvore
  for (i = 1; i <= linhas; i++) {
    // Calcula o número de espaços em branco antes dos asteriscos
    espacos = linhas - i;

    // Imprime os espaços em branco
    for (j = 1; j <= espacos; j++) {
      printf(" ");
    }

    // Imprime os asteriscos
    for (j = 1; j <= 2 * i - 1; j++) {
      printf("*");
    }

    // Quebra de linha para passar para a próxima linha
    printf("\n");
  }

  return 0;
}




