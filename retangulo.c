#include <stdio.h>
#include <math.h>

int main(){

    double base, altura, area, diagonal, perimetro;

    printf("Digite a base do retangulo: ");
    scanf("%lf", &base);

    printf("Digite a altura do retangulo: ");
    scanf("%lf", &altura);

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt((base * base) + (altura * altura));

    printf("Area do retangulo: %.4lf\n", area);
    printf("Perimetro do retangulo: %.4lf\n", perimetro);
    printf("Diagonal do retangulo: %.4lf\n", diagonal);



    return 0;
}
