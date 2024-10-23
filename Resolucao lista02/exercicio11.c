/*
    11. Escreva um programa que leia um número inteiro e imprima-o em representação decimal, octal e  hexadecimal.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num;

    printf("Entre com o numero: ");
    scanf("%d", &num);

    printf("Decimal: %d\n", num);
    printf("Octal: %o\n", num);
    printf("Hexadecimal: %x\n", num);

    return 0;
}
