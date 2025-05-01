#include <stdio.h>


void mediasalario( ){
    int contador = 0; // o contador será a quantidade de familias
    int salario = -1;
    int soma_salario;
    int mediapopulacao;
    while (salario != 0)
    {
        printf("Qual seu salario?");
        scanf("%d", &salario);
        salario += salario;
        

        if(salario !=0){
            soma_salario += salario;
            contador++;
        }
    }
  
mediapopulacao = soma_salario/contador;
printf("a media da população é %d", &mediapopulacao);
}

int main(){

    
    mediasalario;
    return 0;
}