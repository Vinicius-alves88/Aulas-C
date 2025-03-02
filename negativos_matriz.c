#include <stdio.h>

int main(){

    int M, N, i, j;

    printf("Qual a quantidade de linhas da Matriz? ");
    scanf("%d", &M);
    printf("Qual a quantidade de colunas da Matriz? ");
    scanf("%d", &N);

    int mat[M][N];

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("ELEMENTO [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("VALORES NEGATIVOS:\n");

    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            if (mat[i][j] < 0){
                printf("%d\n", mat[i][j]);
            }
        }
    }
    return 0;
}
