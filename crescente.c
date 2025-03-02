#include <stdio.h>

int main(){

    int n1, n2;

    printf("Digite o primeiro numero: ");
        scanf("%d", &n1);

        printf("Digite o segundo numero: ");
        scanf("%d", &n2);

    while (n1 != n2){

        if (n1 > n2){
            printf("DECRESCENTE!\n");
        }
        else{
            printf("CRESCENTE!\n");
        }
        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);

        printf("Digite o segundo numero: ");
        scanf("%d", &n2);
    }



    return 0;
}
