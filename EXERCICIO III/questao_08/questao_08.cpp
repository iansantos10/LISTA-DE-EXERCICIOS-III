#include <stdio.h>

int main() {
    int numeros[10];
    int i, indiceMaior = 0, indiceMenor = 0;

    
    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    for (i = 1; i < 10; i++) {
        if (numeros[i] > numeros[indiceMaior])
            indiceMaior = i;
        if (numeros[i] < numeros[indiceMenor])
            indiceMenor = i;
    }

    
    printf("\nMaior valor: %d (indice %d)\n", numeros[indiceMaior], indiceMaior);
    printf("Menor valor: %d (indice %d)\n", numeros[indiceMenor], indiceMenor);

    return 0;
}
