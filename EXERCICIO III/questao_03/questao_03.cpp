#include <stdio.h>

int main() {
    int n;
    
    printf("Quantos numeros voce quer digitar? ");
    scanf("%d", &n);

    int numeros[n];
    int somaPares = 0, somaImpares = 0;

    
    for (int i = 0; i < n; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    
    printf("Numeros digitados: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", numeros[i]);
        if (numeros[i] % 2 == 0)
            somaPares += numeros[i];
        else
            somaImpares += numeros[i];
    }

    printf("\n\nSoma dos pares: %d", somaPares);
    printf("\nSoma dos impares: %d\n", somaImpares);

    return 0;
}
