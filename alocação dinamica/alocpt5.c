#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    int count = 0;
    char frase[200];
    char **lista = (char**) malloc(sizeof(char*));


    while(1){
        printf("Digite a frase desejada(ou FIM para encerrar):");
        scanf("%s", frase);

        // deixando tudo maiusculo
        for(int i =0; i<count; i++){
            frase[i] = toupper(frase[i]);
        }

        //ponto de parada
        if(strcmp(frase,"FIM") == 0){
            break;
        }

        lista[count] = (char*) malloc(strlen(frase)+1);
        strcpy(lista[count], frase);
        count++;

        //realloc
        int **temp = realloc (lista, (count +1)*sizeof(char*));
        if(temp == NULL){
            printf("Erro ao alocar memoria.");
            //free
            for(int i = 0; i<count; i++){
                free(lista[i]);
                return 1;

            }
            
        }

    }
    //mostrando as frases
    printf("As frases digitadas foram:\n");
    for(int i =0; i < count; i++){
        printf("%s \n", lista[i]);
    }

return 0;
}