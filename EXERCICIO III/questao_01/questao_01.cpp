#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra[100];
    int vogais = 0, consoantes = 0;
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra); 

    for (i = 0; i < strlen(palavra); i++) {
        char c = tolower(palavra[i]); // 
        if (isalpha(c)) { ]
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vogais++;
            else
                consoantes++;
        }
    }

    printf("Vogais: %d\n", vogais);
    printf("Consoantes: %d\n", consoantes);

    return 0;
}
