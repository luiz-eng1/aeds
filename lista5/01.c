#include <stdio.h>


int main(){

    int vetor[5]= {2, 4, 6, 8, 10};
    int ovetor[5];

    for(int i=0; i<5; i++){

        ovetor[i]= vetor[i] * 2;
        printf("ovetor[%d] = %d\n",i, ovetor[i]);
    }

return 0;
}