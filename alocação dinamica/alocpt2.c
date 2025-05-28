#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int n;
    printf("Quantos nomes irá digitar?");
    scanf("%d", &n);
    char **nomes = (char**) malloc(n* sizeof(char));
    //verificacao
    if (nomes == NULL){
        printf("Erro ao alocar memoria");
        return 1;
    }

    for(int i = 0; i< n; i++){
        nomes[i] = (char*) malloc(50* sizeof(char));
        if(nomes[i] == NULL ){
            printf("Erro ao alocar memoria para nome %d", i);
            return 1;
        }
        printf("Digite o nome %d", i+1);
        scanf("%s", nomes[i]);
    }

    for(int i = 0; i<n; i++){
        printf("O nome %d digitados foram %s", i+1, nomes[i]);
    }

for(int i = 0; i<n; i++){
    free(nomes[i]);
}
free(nomes);
return 0;
}