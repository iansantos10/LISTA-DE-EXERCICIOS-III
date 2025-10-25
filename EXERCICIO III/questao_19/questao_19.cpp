#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    int i, contador = 0;

    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    
    for(i = 0; i < strlen(palavra); i++) {
        if(palavra[i] == 'a' || palavra[i] == 'A') { 
            contador++;
        }
    }

    printf("A letra 'a' aparece %d vezes na palavra.\n", contador);

    return 0;
}
