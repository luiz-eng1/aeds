/*100 numeros inteiros

#include <stdio.h>

int main(){

    int vetor[100];

    for(int i=0; i < 100;i++){
        vetor[i]= i-50;
    }

    for(int i=0; i < 100;i++){
        if(vetor[i]>0){
            printf("%d\n", vetor[i]);
        }
    }
}
*/



/*Armazenar 10 numeros em um vetor e exibir o maior

#include <stdio.h>
 
int main() {
    int vetor[10];
    int maior;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    maior = vetor[0];

    for (int i = 0; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
    }

    printf("O maior numero digitado foi %d\n", maior);

    return 0;
}

*/


#include <stdio.h>

int main(){
    int vetor[20];
    int mtdois = 0;
    int mttres =0;
    int ndoisencinco = 0;

    for(int i = 0; i<20; i++){
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);
        }
    

    for(int i = 0; i<20;i++){
        if(vetor[i]%2==0){
            mtdois++;
        }

        if(vetor[i]%3==0){
            mttres++;
        }
        if(vetor[i]%2!=0 && vetor[i]%5!=0){
            ndoisencinco++;
        }
    }

    printf("o numero de divisores por 2 e %d", mtdois);
    printf("o numero de divisores por 3 e %d", mttres);
    printf("o numero de nao divisores por 2 e por 5 e %d", ndoisencinco);

}

    


