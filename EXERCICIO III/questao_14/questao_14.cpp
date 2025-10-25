#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int somaDiagonal = 0;

    
    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

   
    for(i = 0; i < 4; i++) {
        somaDiagonal += matriz[i][i];
    }

    printf("\nA soma dos elementos da diagonal principal é: %d\n", somaDiagonal);

    return 0;
}
