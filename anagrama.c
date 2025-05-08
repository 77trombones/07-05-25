#include <stdio.h>
#include <string.h>


void ordenar(char str[]) {
    int i, y, len = strlen(str);
    char temp;
    
    for (i = 0; i < len - 1; i++) {
        for (y = i + 1; y < len; y++) {
            if (str[i] > str[y]) {
                temp = str[i];
                str[i] = str[y];
                str[y] = temp;
            }
        }
    }
}
int main() {
    char str1[101], str2[101]; 
    printf("Digite a primeira palavra: ");
    scanf("%100s", str1);

    printf("Digite a segunda palavra: ");
    scanf("%100s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Não têm os mesmos tamanhos, então não são anagramas...\n");
        return 0;
    }

    ordenar(str1);
    ordenar(str2);

    if (strcmp(str1, str2) == 0) {
        printf("São anagramas!\n");
    } else {
        printf("Não são anagramas.\n");
    }

    return 0;
}