#include <stdio.h>

int main(){

    int N, i;


    printf("Quantos numeros vc vai digitar: ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++) {
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nNUMEROS DIGITADOS\n");

    for (i = 0; i < N; i++) {
        printf("%.1lf\n", vet[i]);
    }

    return 0;
}
