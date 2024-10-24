/*
    13. Elabore um programa que calcule quantas notas de 50, 20, 10 e 1 são necessárias para se
        pagar uma conta cujo valor é fornecido (considere apenas valores inteiros).
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int valor, n50, n20, n10, n1;

    printf("Entre com o valor: ");
    scanf("%d", &valor);

    n50 = valor / 50;
    valor = valor % 50;

    n20 = valor / 20;
    valor = valor % 20;

    n10 = valor / 10;
    valor = valor % 10;

    n1 = valor;

    printf("Sao necessarias:\n%d notas de 50\n%d notas de 20\n%d notas de 10\n%d notas de 1\n", n50, n20, n10, n1);

    return 0;
}
