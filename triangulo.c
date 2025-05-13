#include <stdio.h>

int main( ) {
    int numero, x, y;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (x = 1; x <= numero; x++) {
        for (y = 1; y <= x; y++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}