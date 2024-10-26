/*
    17. Escreva um programa que recebe a longitude dos três lados de um triângulo e informa se o
    triângulo  é isóscele. Considere que efetivamente os lados formam um triângulo.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float a, b, c;

    printf("Entre com o valor do primeiro comprimento: ");
    scanf("%f", &a);

    printf("Entre com o valor do segundo comprimento: ");
    scanf("%f", &b);

    printf("Entre com o valor do terceiro comprimento: ");
    scanf("%f", &c);

    if(a < b + c && b < a + c && c < a + b){
        if(a == b || a == c || c == b) {
            printf("O triangulo e isosceles!\n");

        } else {
            printf("O triangulo nao e isosceles!\n");
        }

    } else {
        printf("Os valores informados NAO podem formar os lados de um triangulo!\n");
    }

    return 0;
}
