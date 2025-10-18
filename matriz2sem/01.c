int main(){
    int Pmatriz[3][3];
    int Smatriz[3][3];
    int somamatriz[3][3];

    // primeira matriz
    printf("Digite os elementos da primeira matriz: ");
    for(int i = 0; i < 3 ; i++){
        for(int j = 0; j < 3; j++){
            printf("Pmatriz[%d][%d]", i, j);
            scanf("%d", &Pmatriz[i][j]);
        }
    }

    // segunda matriz
    printf("Digite os elementos da segunda matriz: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Smatriz[%d][%d]", i, j);
            scanf("%d", &Smatriz[i][j]);
        }
    }

    // soma
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++ ){
            somamatriz[i][j] = Pmatriz[i][j] + Smatriz[i][j];
        }
    }


    printf("A soma das matrizes eh :");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d", somamatriz[i][i]);
        }
        printf("\n");
    }
    return 0;
}