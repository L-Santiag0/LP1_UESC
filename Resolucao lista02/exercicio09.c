/*
    9. Escreva um programa que receba a entrada de um numero inteiro de 5 dígitos ,
       separe o número em  seus dígitos componentes e os imprima separados uns dos outros por três espaços.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{

    int num;

    printf("Entre com o numero: ");
    scanf("%d", &num);

    // Verifica se o numero digitado tem 5 digitos.
    if(num >= 10000 && num <= 99999) {
        printf("%d", num / 10000);
        num = num % 10000;

        printf("%4d", num / 1000);
        num = num % 1000;

        printf("%4d", num / 100);
        num = num % 100;

        printf("%4d", num / 10);
        num = num % 10;

        printf("%4d\n", num / 1);
        num = num % 1;

    } else {
        printf("ERRO! Informe um numero com 5 digitos.\n");
    }

    return 0;
}
