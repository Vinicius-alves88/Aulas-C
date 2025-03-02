#include <stdio.h>

int main(){

    double lar_terreno, comp_terreno, val_metro, area, preco;

    printf("Digite a Largura do terreno: ");
    scanf("%lf", &lar_terreno);

    printf("Digite o Comprimento do terreno: ");
    scanf("%lf", &comp_terreno);

    printf("Digite o valor do metro quadrado: ");
    scanf("%lf", &val_metro);

    area = lar_terreno * comp_terreno;
    preco = val_metro * area;

    printf("\nArea do Terreno = %.2lf\n", area);
    printf("Preco do Terreno = %.2lf\n", preco);

    return 0;
}
