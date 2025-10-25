#include <stdio.h>

#define TAMANHO 5

int main() {
    int vetor1[TAMANHO], vetor2[TAMANHO];
    int i;
    int produto_escalar = 0;
    
    
    printf("Digite os elementos do primeiro vetor (%d números):\n", TAMANHO);
    for(i = 0; i < TAMANHO; i++) {
        printf("Vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }
    
    
    printf("\nDigite os elementos do segundo vetor (%d números):\n", TAMANHO);
    for(i = 0; i < TAMANHO; i++) {
        printf("Vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }
    
    s
    printf("\nVetor 1: ");
    for(i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor1[i]);
    }
    
    printf("\nVetor 2: ");
    for(i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor2[i]);
    }
    printf("\n\n");
    
    
    for(i = 0; i < TAMANHO; i++) {
        produto_escalar += vetor1[i] * vetor2[i];
    }
    
    
    printf("Produto escalar entre os vetores:\n");
    printf("=================================\n");
    
    
    printf("Cálculo: ");
    for(i = 0; i < TAMANHO; i++) {
        printf("(%d × %d)", vetor1[i], vetor2[i]);
        if(i < TAMANHO - 1) {
            printf(" + ");
        }
    }
    printf("\n\n");
    
    printf("Resultado = %d\n", produto_escalar);
    
    return 0;
}
