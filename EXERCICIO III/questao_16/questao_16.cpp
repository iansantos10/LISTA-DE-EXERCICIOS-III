#include <stdio.h>

int main() {
    int matriz[3][3];
    int i, j;
    int somaLinha, somaColuna, somaDiagonalPrincipal = 0, somaDiagonalSecundaria = 0;
    int magico = 1; 

   
    printf("Digite os elementos da matriz 3x3:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    for(i = 0; i < 3; i++) {
        somaDiagonalPrincipal += matriz[i][i];
    }
    for(i = 0; i < 3; i++) {
        somaDiagonalSecundaria += matriz[i][2-i];
    }

    if(somaDiagonalPrincipal != somaDiagonalSecundaria) {
        magico = 0;
    }
    for(i = 0; i < 3 && magico; i++) {
        somaLinha = 0;
        somaColuna = 0;
        for(j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }
        if(somaLinha != somaDiagonalPrincipal || somaColuna != somaDiagonalPrincipal) {
            magico = 0;
        }
    }

    if(magico) {
        printf("\nA matriz é um quadrado mágico!\n");
    } else {
        printf("\nA matriz NÃO é um quadrado mágico.\n");
    }

    return 0;
}
