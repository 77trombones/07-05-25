#include <stdio.h>

int main() { int numero, x, y; char opcao;

while (1) { 
    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("A - Esquerda\nD - Direita\nF - Sair\n");
    scanf(" %c", &opcao);

    if (opcao == 'F') break;

    if (opcao == 'A') {
        for (x = 1; x <= numero; x++) {
            for (y = 1; y <= x; y++) {
                printf("*");
            }
            printf("\n");
        }
    } else if (opcao == 'D') { 
        for (x = 1; x <= numero; x++) {
            for (y = 0; y < numero - x; y++) {
                printf(" ");
            }
            for (y = 0; y < x; y++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("Opção inválida.\n");
    }
}

return 0;

}