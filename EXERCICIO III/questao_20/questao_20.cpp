#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, tamanho, palindromo = 1;

    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    tamanho = strlen(palavra);

    
    for(i = 0; i < tamanho / 2; i++) {
        if(palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0; 
            break;
        }
    }

    if(palindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra NÃO é um palíndromo.\n");
    }

    return 0;
}
