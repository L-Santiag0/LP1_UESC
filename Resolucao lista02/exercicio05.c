/*
    5. Escreva um programa que leia os valores (x; y) de um ponto do plano e
       informe no qual quadrante o  ponto se encontra.
       Utilize o menor número de condições possíveis.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float x, y;

    printf("Entre com o valor de x: ");
    scanf("%f", &x);

    printf("Entre com o valor de y: ");
    scanf("%f", &y);

    if(x == 0 || y == 0) {
        printf("O ponto se encontra na origem.\n");

    } else if(x > 0) {
        if(y > 0) {
            printf("O ponto se encontra no QUADRANTE 1.\n");

        } else {
            printf("O ponto se encontra no QUADRANTE 4.\n");
        }
    } else {
        if(y > 0) {
            printf("O ponto se encontra no QUADRANTE 2.\n");

        } else {
            printf("O ponto se encontra no QUADRANTE 3.\n");
        }
    }

    return 0;
}
