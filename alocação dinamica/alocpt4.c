#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){
    int count = 0;
    char buffer[101];
    char **lista = (char**) malloc(sizeof(char*));


    while(1){
        printf("Digite o nome do produto(ou FIM pra encerrar):");
        scanf("%s", buffer);


        

      
        //deixando tudo maisculo
        for(int i = 0; buffer[i] != '\0'; i++){
           buffer[i] = toupper(buffer[i]);
        }


        //verficador de parada
        if(strcmp(buffer, "FIM")==0 ){
            break;
        }


         // Aloca espaço para o novo item e copia o conteúdo
        lista[count] = (char*) malloc(strlen(buffer)+1);
        strcpy(lista[count], buffer);
        count++;


        char **temp =realloc (lista, (count+1)* sizeof(char*));
        if(temp == NULL){
            printf("Erro ao realocar memoria.");
            //free
            for(int i = 0; i<count; i++){
                free(lista);
                return 1;
            }
            lista = temp;
        }

        

        
        
    }
    //imprimir os produtos da lista
        printf("Lista de compras:\n");
        for(int i = 0; i<count; i++){
            printf("O %d produto foi %s\n", i+1, lista[i]);
            free(lista[i]);
        }

        free(lista);
    return 0;
}