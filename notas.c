#include <stdio.h>

int main(){

    double nota1, nota2, soma;

    printf("Digite a nota do primeiro semestre: ");
    scanf("%lf", &nota1);

    printf("Digite a nota do segundo semestre: ");
    scanf("%lf", &nota2);

    soma = nota1 + nota2;

    if (soma > 60){
        printf("NOTA FINAL: %.1lf\n", soma);
        printf("APROVADO!");
    }
    else{
        printf("NOTA FINAL: %.1lf\n", soma);
        printf("REPROVADO!");
    }

    return 0;
}
