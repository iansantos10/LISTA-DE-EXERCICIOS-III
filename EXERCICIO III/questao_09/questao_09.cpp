#include <stdio.h>

int main() {
    int numeros[8];
    int i, j, temp;

    
    printf("Digite 8 numeros:\n");
    for(i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 7 - i; j++) {
            if(numeros[j] < numeros[j + 1]) {
                temp = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = temp;
            }
        }
    }

    
    printf("\nNumeros em ordem decrescente:\n");
    for(i = 0; i < 8; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
