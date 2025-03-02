#include <stdio.h>

int main(){

    int X, Y, i, soma, troca;

    printf("Digite dois numeros:\n");
    scanf("%d", &X);
    scanf("%d", &Y);

    soma = 0;

    if (X > Y){
        troca = X;
        X = Y;
        Y = troca;
    }

    for (i = X+1; i < Y; i++){
        if (i % 2 != 0){
            soma = soma + i;
        }
    }
    printf("SOMA DOS IMPARES: %d", soma);

    return 0;
}
