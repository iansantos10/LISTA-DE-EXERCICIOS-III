#include <stdio.h>

#define TAMANHO 10
#define MIN 0
#define MAX 20

int main() {
    int numeros[TAMANHO];
    int i, j;
    int verificados[TAMANHO] = {0}; 
    
    
    printf("Digite %d números inteiros (entre %d e %d):\n", TAMANHO, MIN, MAX);
    for(i = 0; i < TAMANHO; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &numeros[i]);
        
        
        while(numeros[i] < MIN || numeros[i] > MAX) {
            printf("Número fora do range permitido (%d a %d). Digite novamente: ", MIN, MAX);
            scanf("%d", &numeros[i]);
        }
    }
    
    
    printf("\nNúmeros digitados: ");
    for(i = 0; i < TAMANHO; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n\n");
    
    
    printf("Frequência de cada número:\n");
    printf("===========================\n");
    
    for(i = 0; i < TAMANHO; i++) {
        
        if(verificados[i] == 1) {
            continue;
        }
        
        int contador = 1; 
        
        
        for(j = i + 1; j < TAMANHO; j++) {
            if(numeros[i] == numeros[j]) {
                contador++;
                verificados[j] = 1; 
            }
        }
        
        printf("Número %d: %d vez(es)\n", numeros[i], contador);
        verificados[i] = 1; 
    }
    
    return 0;
}
