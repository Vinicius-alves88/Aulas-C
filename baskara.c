#include <stdio.h>
#include <math.h>

int main(){

    double a, b, c, delta, x1, x2;

    printf("Digite o Coeficiente A: ");
    scanf("%lf", &a);

    printf("Digite o Coeficiente B: ");
    scanf("%lf", &b);

    printf("Digite o Coeficiente C: ");
    scanf("%lf", &c);

    delta = (b * b) - (4 * a * c);

    if (a == 0){
        printf("A = 0 entao nao podemos continuar.");
        return 1;
    }
    else if (delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
    }
    else{
        printf("Esta equacao nao possui raizes reais!");
    }

     printf("x1 = %.4lf\n", x1);
     printf("x2 = %.4lf\n", x2);

    return 0;
}
