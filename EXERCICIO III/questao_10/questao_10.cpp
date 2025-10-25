#include <stdio.h>

#define LINHAS 4
#define COLUNAS 4

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    int maior;

    
    printf("Digite os elementos da matriz 4x4:\n");
    for(i = 0; i < LINHAS; i++) {
        printf("Linha %d:\n", i + 1);
        for(j = 0; j < COLUNAS; j++) {
            printf("  Elemento [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    
    printf("\nMatriz digitada:\n");
    for(i = 0; i < LINHAS; i++) {
        for(j = 0; j < COLUNAS; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    /
    printf("\nMaior valor de cada linha:\n");
    for(i = 0; i < LINHAS; i++) {
        maior = matriz[i][0];
        
        
        for(j = 1; j < COLUNAS; j++) {
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
        
        printf("Linha %d: %d\n", i + 1, maior);
    }

    return 0;
}
