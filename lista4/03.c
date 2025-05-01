#include <stdio.h>
#include <math.h>


void crescente(int vum, int vdois, int vtres){
    if ( vum > vdois && vdois > vtres){
        printf("A ordem crescente e %d, %d, %d", vtres, vdois, vum);
    }

    if( vum > vtres && vtres > vdois){
        printf("A ordem crescente e %d, %d, %d", vdois, vtres, vum);
    }


    if (vdois > vum && vum > vtres){
        printf("A ordem crescente e %d, %d, %d", vtres, vum, vdois);
    }

    if(vdois > vtres && vtres > vum){
        printf("A ordem crescente e %d, %d, %d", vum, vtres, vdois);
    }


    if( vtres > vum && vum > vdois){
        printf("A ordem crescente e %d, %d, %d", vdois, vum, vtres);
    }

    if( vtres > vdois && vdois > vum){
        printf("A ordem crescente e %d, %d, %d", vum, vdois, vtres);
    }
}


int main(){
    int a, b, c;
    printf("Digite o primeiro numero:");
    scanf("%d", &a);

    printf("Digite o segundo numero:");
    scanf("%d", &b);

    printf("Digite o terceiro numero:");
    scanf("%d", &c);

    crescente (a, b, c);
}