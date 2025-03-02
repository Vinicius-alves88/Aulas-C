#include <stdio.h>

int main(){

    int M, N, i ,j;

    printf("Quantas linhas vai ter a Matriz? ");
    scanf("%d", &M);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &N);

    int matrizA[M][N];
    int matrizB[M][N];
    int matrizSoma[M][N];

    printf("DIGITE OS VALORES DA MATRIZ A:\n");
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("ELEMENTO [%d,%d]: ",i ,j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("DIGITE OS VALORES DA MATRIZ B:\n");
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("ELEMENTO [%d,%d]: ",i ,j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    printf("MATRIZ SOMA:\n");
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            matrizSoma[i][j] = 0;
            matrizSoma[i][j] = matrizA[i][j] + matrizB[i][j];
            printf("%d ", matrizSoma[i][j]);
        }
        printf("\n");
    }

    return 0;
}
