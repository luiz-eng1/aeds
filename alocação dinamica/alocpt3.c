#include <stdio.h>
#include <stdlib.h>


int main(){
    int count = 0, entrada;
    
    

    int *numeros = (int*) malloc(sizeof(int));

    while(1){
        printf("Digite um número(para parar, digite um numero negativo):");
        scanf("%d", &entrada);

        if(entrada<0){
            break;
        }
        numeros[count] =entrada;
        count++;

        int *temp = realloc(numeros, (count + 1)*sizeof (int));
        if(temp == NULL){
            printf("Erro ao alocar memoria");
            free(numeros);
            return 1;
        }
     }

return 0;
}