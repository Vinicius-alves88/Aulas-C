#include <stdio.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main(){

    char nome1[50], nome2[50];
    double idade1, idade2, media;

    printf("Digite o nome da primeira pessoa: ");
    ler_texto(nome1, 50);

    printf("Digite a idade da primeira pessoa: ");
    scanf("%lf", &idade1);

    limpar_entrada();

    printf("\nDigite o nome da segunda pessoa: ");
    ler_texto(nome2, 50);

    printf("Digite a idade da segunda pessoa: ");
    scanf("%lf", &idade2);

    media = (idade1 + idade2) / 2;

    printf("\nA idade media entre %s e %s = %.1lf", nome1, nome2, media);



    return 0;
}
