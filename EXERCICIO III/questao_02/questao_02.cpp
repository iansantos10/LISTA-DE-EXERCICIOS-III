#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    
    if (num1 > num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    printf("Numeros entre %d e %d:\n", num1, num2);
    
    for (int i = num1 + 1; i < num2; i++) {
        printf("%d ", i);
    }
    
    printf("\n");
    
    return 0;
}
