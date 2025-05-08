#include <stdio.h>

int main() {
    int vetor[10];
    int i, y, temp;

    printf("Digite dez números\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 9; i++) {
        for (y = i + 1; y < 10; y++) {
            if (vetor[i] > vetor[y]) {
                temp = vetor[i];
                vetor[i] = vetor[y];
                vetor[y] = temp;
            }
        }
    }

    printf("Os números em ordem crescente são:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}