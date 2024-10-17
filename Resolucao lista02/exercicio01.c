/* 1. Escreva um programa que peça ao usuário para digitar dois números inteiros,
      obtenha-os do usuário  e imprima a soma, o produto, a diferença, o quociente
      e o resto da divisão dos dois números.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num1, num2;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &num1);

    printf("Entre com o segundo numero: ");
    scanf("%d", &num2);

    int soma = num1 + num2;
    printf("A soma: %d + %d = %d\n", num1, num2, soma);

    int produto = num1 * num2;
    printf("O produto: %d * %d = %d\n", num1, num2, produto);

    int diferenca = num1 - num2;
    printf("A diferenca: %d - %d = %d\n", num1, num2, diferenca);

    if(num2 != 0) {
        int quociente = num1 / num2;
        printf("O quociente: %d / %d = %d\n", num1, num2, quociente);

        int resto = num1 % num2;
        printf("O resto da divisao entre %d e %d e: %d", num1, num2, resto);

    } else {

        printf("ERRO! Não e possivel a divisao por 0.\n");
    }

    return 0;
}

