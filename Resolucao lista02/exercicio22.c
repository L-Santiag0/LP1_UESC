/*
    22. O número 3025 possui uma característica interessante, sendo a seguinte:
    30 + 25 = 55 e 55² = 3025
    Elabore um programa que verifique se um número inteiro de quatro
    algarismos(digitado) tem essa  propriedade ou não.

*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num;

    printf("Entre com o numero: ");
    scanf("%d", &num);

    if(num >= 1000 && num <= 9999) {
        int soma = num / 100 + num % 100;

        if(soma * soma == num) {
            printf("%d tem a propriedade!\n", num);
        } else {
            printf("%d nao tem a propriedade!\n", num);
        }

    } else {
        printf("ERRO! Informe um valor com 4 digitos.\n");
    }

    return 0;
}
