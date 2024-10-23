/*
    6. Escreva um programa que leia um número inteiro e informe se ele é par ou ímpar.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num;

    printf("Entre com o numero: ");
    scanf("%d", &num);

    if(num % 2 == 0) {
        printf("O numero informado e par!\n");
    } else {
        printf("O numero informado e impar!\n");
    }

    return 0;
}
