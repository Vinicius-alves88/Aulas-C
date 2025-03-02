#include <stdio.h>

int main(){

    int N, i, multi;

    printf("Deseja saber a tabuada de qual numero: ");
    scanf("%d", &N);

    for (i = 1; i <= 10; i++){
        multi = N * i;
        printf("%d x %d = %d\n", N, i, multi);
    }

    return 0;
}
