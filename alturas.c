#include <stdio.h>
#include <string.h>

int main(){

    int N, i, menor16;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    double altura[N];
    int idade[N];
    char nome[N][50];

    for(i = 0; i < N; i++){
        printf("Dados da %da pessoa:\n",i+1);
        printf("Nome: ");
        scanf("%s", &nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
    }

    double alturaMedia;

    alturaMedia = 0;

    for (i = 0; i< N; i++){
        alturaMedia = alturaMedia + altura[i];
    }

    alturaMedia = alturaMedia / N;
    printf("Altura Media = %.2lf\n", alturaMedia);
    menor16 = 0;

    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            menor16 = menor16 + 1;
        }
    }

    double porcentagem;
    porcentagem = (double)(menor16 * 100.0) / N;
    printf("Pessoas com menos de 16 anos: %.1lf %%\n", porcentagem);

    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            printf("%s\n", nome[i]);
        }
    }


    return 0;
}
