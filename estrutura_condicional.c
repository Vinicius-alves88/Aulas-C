#include <stdio.h>

int main(){

    int hora;

    printf("Digite a hora do dia: ");
    scanf("%d", &hora);

    if (hora < 12){
        printf("BOM DIA!");
    }
    else if (hora >= 12 && hora <19){
        printf("BOA TARDE!");
    }
    else{
        printf("BOA NOITE!");
    }

    return 0;
}
