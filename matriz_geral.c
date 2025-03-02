#include <stdio.h>

int main(){

    int N, i, j;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    double mat[N][N];

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("ELEMENTO [%d,%d]: ", i, j);
            scanf("%lf", &mat[i][j]);
        }
    }

    double somaPositivos;
    somaPositivos = 0;

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (mat[i][j] > 0){
                somaPositivos = somaPositivos + mat[i][j];
            }
        }
    }

    printf("\nSOMA DOS POSITIVOS = %.1lf\n", somaPositivos);

    int linha = 0;
    printf("\nEscolha uma linha: ");
    scanf("%d", &linha);
    printf("LINHA ESCOLHIDA: ");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (i == linha){
                printf("%.1lf ", mat[i][j]);
            }
        }
    }

    printf("\n");
    int coluna = 0;
    printf("\nEscolha uma coluna: ");
    scanf("%d", &coluna);
    printf("COLUNA ESCOLHIDA: ");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (j == coluna){
                printf("%.1lf ", mat[i][j]);
            }
        }
    }

    printf("\n");
    printf("\nDIAGONAL PRINCIPAL: ");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (i == j){
                printf("%.1lf ", mat[i][j]);
            }
        }
    }

    printf("\n");
    printf("\nMATRIZ ALTERADA:\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (mat[i][j] < 0){
                mat[i][j] = mat[i][j] * mat[i][j];
            }
            printf("%.1lf ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
