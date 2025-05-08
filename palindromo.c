#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11]; 
    int i, tamanho, ehpalindromo = 1;

    printf("Digite a palavra: ");
    scanf("%10s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            ehpalindromo = 0;
            break;
        }
    }
    if (ehpalindromo)
        printf("Resultado: é um palíndromo\n");
    else
        printf("Resultado: Não é um palíndromo\n");

    return 0;
}