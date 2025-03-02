#include <stdio.h>

int main(){

    int N, i, j, qntNegativos;

    printf("Qual a ordem da Matriz? ");
    scanf("%d", &N);

    int mat[N][N];

    for (i = 0; i < N; i++){
        for (j = 0; j < N;j++){
            printf("ELEMENTO [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("DIAGONAL PRINCIPAL:\n");
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (mat[i][i] == mat[j][j]){
                printf("%d ", mat[i][j]);
            }
        }
    }

    qntNegativos = 0;

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (mat[i][j] < 0){
                qntNegativos = qntNegativos + 1;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", qntNegativos);

    return 0;
}
