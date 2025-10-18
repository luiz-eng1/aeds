#include <stdio.h>

void preenchevetor(float notas[], int tam) {
    for (int i = 0; i < tam; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
    }
}

float encontraMaiorNota(float notas[], int tam) {
    float maiornota = notas[0];
    for (int i = 1; i < tam; i++) {       
        if (notas[i] > maiornota) {
            maiornota = notas[i];
        }
    }
    return maiornota;
}

void exibePercentuais(float notas[], int tam, float maiornota, float percentual[]) {
    printf("\nPercentuais em relação à maior nota (%.2f):\n", maiornota);

    for (int i = 0; i < tam; i++) {
        percentual[i] = (notas[i] / maiornota) * 100;
        printf("Aluno %2d: %.2f%%\n", i + 1, percentual[i]); 
    }

    printf("\n");
}

int main() {
    int tam = 15;
    float notas[15], percentual[15];
    float maiornota;

    preenchevetor(notas, tam);
    maiornota = encontraMaiorNota(notas, tam);
    exibePercentuais(notas, tam, maiornota, percentual);

    return 0;
}


