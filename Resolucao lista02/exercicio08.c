/*
    8. Escreva um programa que leia dois inteiros e então determine se o maior é múltiplo do menor.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, cont = 1;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &num1);

    printf("Entre com o segundo numero: ");
    scanf("%d", &num2);

    if(num1 >= num2) {
        if(num1 % num2 == 0) {
            printf("%d e multiplo de %d", num1, num2);
        } else {
            printf("%d nao e multiplo de %d", num1, num2);
        }

    } else {
        if(num2 % num1 == 0) {
            printf("%d e multiplo de %d", num2, num1);
        } else {
            printf("%d nao e multiplo de %d", num2, num1);
        }
    }

    return 0;

}
