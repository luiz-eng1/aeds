#include <stdio.h>
void verificatriangulo(float x, float y, float z){
    
    if (x < y + z && y < x + z && z < x + y) {  // condicao para formar triangulo
        
        if (x == y && y == z) {
            printf("Triangulo Equilatero\n");
        } else if (x == y || x == z || y == z) {
            printf("Triangulo Isosceles\n");
        } else {
            printf("Triangulo Escaleno\n");
        }
    } else {
        printf("Os valores não formam um triangulo.\n");
    }


}

int main(){
    int a, b ,c;
    printf("Digite o valor de A:");
    scanf("%d", &a); // armazena em a

    printf("Digite o valor de B:");
    scanf("%d", &b); // armazena em b

    printf("Digite o valor de C:");
    scanf("%d", &c); // armazena em c

    verificatriangulo(a, b, c); // chama função

    return 0;
}