#include <stdio.h>
void verificatriangulo(int x, int y, int z){
    if(x==y && y==z){
        printf("Este seria um triangulo equilatero!!");
    }else if(x==y || x==z || y==z){
        printf("Esse seria um triangulo isoceles!!");
    }else if(x!=y || x!=z || y!=z){
        printf("Esse seria um triangulo escaleno!!");
    }
}

int main(){
    int a, b ,c;
    printf("Digite o valor de A:");
    scanf("%d", &a);

    printf("Digite o valor de B:");
    scanf("%d", &b);

    printf("Digite o valor de C:");
    scanf("%d", &c);

    verificatriangulo(a, b, c);
}