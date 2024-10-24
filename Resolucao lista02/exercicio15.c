/*
    15. Elabore um programa que calcule e exiba a média de três números fornecidos pelo usuário.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float num1, num2, num3, media = 0;

    printf("Entre com o primeiro numero: ");
    scanf("%f", &num1);

    printf("Entre com o segundo numero: ");
    scanf("%f", &num2);

    printf("Entre com o terceiro numero: ");
    scanf("%f", &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A media e: %.2f\n", media);

    return 0;
}
