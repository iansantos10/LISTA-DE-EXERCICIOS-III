#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeros[50];
    int unicos[50];
    int i, j, k = 0;
    int repetido;

    
    srand(time(NULL));

   
    for (i = 0; i < 50; i++) {
        numeros[i] = rand() % 11; // valores de 0 a 10
    }

    
    printf("Vetor original:\n");
    for (i = 0; i < 50; i++) {
        printf("%d ", numeros[i]);
    }

    
    for (i = 0; i < 50; i++) {
        repetido = 0;
        for (j = 0; j < k; j++) {
            if (numeros[i] == unicos[j]) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            unicos[k] = numeros[i];
            k++;
        }
    }

    
    printf("\n\nVetor sem repeticoes:\n");
    for (i = 0; i < k; i++) {
        printf("%d ", unicos[i]);
    }

    printf("\n");

    return 0;
}
