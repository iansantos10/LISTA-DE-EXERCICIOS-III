#include <stdio.h>

int main() {
    int numero;

    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    
    if(numero > 0) {
        printf("O numero � positivo.\n");
    } else if(numero < 0) {
        printf("O numero � negativo.\n");
    } else {
        printf("O numero � zero.\n");
    }

    return 0;
}
