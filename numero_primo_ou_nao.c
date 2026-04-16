#include <stdio.h>

int main(void) {
    int numero;
    int ehPrimo = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            ehPrimo = 0;
        }
    }

    if (ehPrimo == 1 && numero > 1) {
        printf("O numero e primo\n");
    } else {
        printf("O numero nao e primo\n");
    }

    return 0;
}
