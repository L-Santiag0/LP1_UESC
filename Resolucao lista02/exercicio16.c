/*
    16. Elabore um programa que receba três valores digitados A; B e C informe se estes podem
    ser os lados  de um triângulo. O ABC é triângulo se A < B + C e B < A + C e C < A + B.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float a, b, c;

    printf("Entre com o primeiro valor: ");
    scanf("%f", &a);

    printf("Entre com o segundo valor: ");
    scanf("%f", &b);

    printf("Entre com o terceiro valor: ");
    scanf("%f", &c);

    if(a < b + c && b < a + c && c < a + b){
        printf("Os valores informados podem ser os lados de um triangulo!\n");

    } else {
        printf("Os valores informados NAO podem formar os lados de um triangulo!\n");
    }

    return 0;
}
