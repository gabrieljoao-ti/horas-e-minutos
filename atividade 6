#include <stdio.h>
#include <stdlib.h>

int main(void){

    int soma;
    int i, j; 

    for (i = 1; i < 100; i++){
        soma = 0;

        for (j = 1; j < i; j++){
            if (i % j == 0){
                soma = soma + j;
            }
        }

        if (soma == i){
            printf("Numero perfeito: %d\n", i);
        }
    }

    return 0;
}
