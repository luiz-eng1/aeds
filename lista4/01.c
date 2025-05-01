#include <stdio.h>

void mediaaritmetica (int primeiranota, int segundanota, int terceiranota){
    int mediaa;
    mediaa = (primeiranota + segundanota + terceiranota)/3;
    printf("A media aritmetica das notas é %d", mediaa);
}

void mediaponderada (int primeiranota, int segundanota, int terceiranota){
    int mediap;
    mediap = ((5*primeiranota) + (3*segundanota) + (2*terceiranota))/10;
    printf("A media ponderada das notas é %d", mediap);
}

int main(){
    int pnota, snota, tnota;
    char opcao;
    printf("Digite a primeira nota:");
    scanf("%d", &pnota);

    printf("Digite a segunda nota:");
    scanf("%d", &snota);

    printf("Digite a terceira nota:");
    scanf("%d", &tnota);

    printf("Digite a opcao das medias:");
    scanf(" %c", &opcao);
    opcao = tolower(opcao);

    switch(opcao)
    {
    case 'a':
        mediaaritmetica(pnota, snota, tnota);
        break;

    case 'p':
        mediaponderada(pnota, snota, tnota);
        break;

    
    default:
        break;
    }
return 0;
}