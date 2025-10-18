int main(){
    int INICIALmatriz[3][2];
    int transposta[2][3];
    printf("Preencha a matriz: ");
    for(int i=0; i < 3; i++){
        for(int j =0; j < 2; j++){
            printf("matriz[%d][%d]", i, j);
            scanf("%d", &INICIALmatriz[i][j]);
        }
    }

    // calcula a transposta (troca linhas por colunas)
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            transposta[j][i] = INICIALmatriz[i][j]; //AQUI TROCA LINHAS POR COLUNAS
        }
    }

    // DESSA FORMA A MATRIZ TRANSPOSTA JA ESTA CRIADA, MAS NÃO VOU EXIBIR

    return 0;
}