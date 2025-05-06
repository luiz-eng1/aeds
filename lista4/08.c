#include <stdio.h>


void procedimento( int x, int y, int z){
    int *p = &x;
    int *l = &y;
    int *m = &z;
    printf("A variavel A tem valor %d e endereço %p", x, p);
    printf("A variavel B tem valor %d e endereço %p", y, l);
    printf("A variavel C tem valor %d e endereço %p", z, m);
}



int main(){
    int a, b ,c;
    int *p = &a;
    int *l = &b;
    int *m = &c;
    printf("Digite o valor de A:");
    scanf("%d", &a);

    printf("Digite o valor de B:");
    scanf("%d", &b);

    printf("Digite o valor de C:");
    scanf("%d", &c);

    procedimento(a, b, c);
}