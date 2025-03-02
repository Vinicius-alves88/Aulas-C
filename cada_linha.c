#include <stdio.h>

int main(){

    int N, i, j, maiorElemento;

    printf("Qual a ordem da Matriz? ");
    scanf("%d", &N);

    int mat[N][N];

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("ELEMENTO [%d,%d]: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }

    maiorElemento = 0;
    printf("MAIOR ELEMENTO DE CADA LINHA:\n");

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (mat[i][j] > maiorElemento){
                maiorElemento = mat[i][j];
            }
        }
        printf("%d\n", maiorElemento);
        maiorElemento = 0;
    }

    return 0;
}
