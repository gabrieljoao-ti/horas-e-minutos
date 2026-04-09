#include <stdio.h>
#include <stdlib.h>

int main(void) {
   float numero1, numero2, soma, subtracao, multiplicacao, divisao;

     printf("Digite o primeiro numero: ");
     scanf("%f", &numero1);
     printf("Digite o segundo numero: ");
     scanf("%f", &numero2);

     soma = numero1 + numero2;
     subtracao = numero1 - numero2;
     multiplicacao = numero1 * numero2;
     divisao = numero1 / numero2;

     printf("Soma: %.2f\n", soma);
     printf("Subtracao: %.2f\n", subtracao);
     printf("Multiplicacao: %.2f\n", multiplicacao);
     
    if  (numero2 != 0) {
        divisao = numero1 / numero2;
        printf("Divisao: %.2f\n", divisao);
    }
    else {
        printf("Divisao por zero nao e permitida.\n");
    }
     printf("Obrigado por usar o programa!\n");
     printf("Desenvolvido por: [João Gabriel]\n");
    
     system("pause");          
    return 0;
}
