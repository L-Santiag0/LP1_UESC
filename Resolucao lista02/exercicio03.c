/*
    3. Escreva um programa que receba três números de ponto flutuante e imprima a soma,
       a média, o  produto, o menor e o maior desses números.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float num1, num2, num3;

    printf("Entre com o primeiro numero: ");
    scanf("%f", &num1);

    printf("Entre com o segundo numero: ");
    scanf("%f", &num2);

    printf("Entre com o terceiro numero: ");
    scanf("%f", &num3);

    float soma = num1 + num2 + num3;
    printf("A soma: %.2f + %.2f + %.2f = %.2f\n", num1, num2, num3, soma);

    float media = soma / 3;
    printf("A media: %.2f\n", media);

    float produto = num1 * num2 * num3;
    printf("O produto: %.2f * %.2f * %.2f = %.2f\n", num1, num2, num3, produto);

    if(num1 > num2 && num1 > num3) {
        if(num2 < num3) {
            printf("O maior: %.2f\nO menor: %.2f\n", num1, num2);

        } else {
           printf("O maior: %.2f\nO menor: %.2f\n", num1, num3);
        }

    } else if(num2 > num1 && num2 > num3) {
        if(num1 < num3) {
            printf("O maior: %.2f\nO menor: %.2f\n", num2, num1);

        } else {
           printf("O maior: %.2f\nO menor: %.2f\n", num2, num3);
        }

    } else {
        if(num1 < num2){
            printf("O maior: %.2f\nO menor: %.2f\n", num3, num1);
        } else {
           printf("O maior: %.2f\nO menor: %.2f\n", num3, num2);
        }
    }

    return 0;
}
