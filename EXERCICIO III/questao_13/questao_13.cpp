#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int somaLinha, maiorSoma = 0, linhaMaiorSoma = 0;

    
    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    for(i = 0; i < 3; i++) {
        somaLinha = 0;
        for(j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
        }
        printf("Soma da linha %d: %d\n", i+1, somaLinha);
        
        if(i == 0 || somaLinha > maiorSoma) { 
            maiorSoma = somaLinha;
            linhaMaiorSoma = i+1;
        }
    }

    printf("\nA linha com a maior soma e a linha %d (soma = %d)\n", linhaMaiorSoma, maiorSoma);

    return 0;
}
