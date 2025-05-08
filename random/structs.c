#include <stdio.h>

struct pessoa
{
    char nome[30];
    
};

struct data{
    int dia;
    int mes;
    int ano;

}


int main(){
    struct  pessoa pessoas[10];
    struct data datas[10];
    int maior=0
    
    for(int i=0; i<10;i++){
        
        
        printf("Digite o nome da %d pessoa", i+1);
        scanf("%s", pessoas[i].nome);

        printf("Digite o dia mes e ano da %d pessoa", i+1);
        fgets(datas[i].dia, datas[i].mes, datas[i].ano);

    }


    return 0;
}