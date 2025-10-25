#include <stdio.h>

int main() {
    int num, contador = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    if (num == 0) {
        contador = 1; 
    } else {
        while (num > 0) {
            num = num / 10; 
            contador++;
        }
    }

    printf("O numero digitado tem %d digito(s).\n", contador);

    return 0;
}
