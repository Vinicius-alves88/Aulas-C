#include <stdio.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    int idade, soma, cont;
    double media;

    soma = 0;
    idade = 0;
    cont = 0;

    printf("DIGITE AS IDADES:\n");
    scanf("%d", &idade);

    while (idade >= 0){
        soma = soma + idade;
        cont = cont + 1;
        scanf("%d", &idade);
    }

    if (cont == 0){
        printf("IMPOSSIVEL CONTINUAR!");
    }
    else{
        media = (double) soma / cont;
        printf("\nMEDIA = %.2lf", media);
    }

    return 0;
}
