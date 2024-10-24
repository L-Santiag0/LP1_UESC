/*
    14. Elabore um programa que permita a entrada de dois valores, x e y,
    troque seus valores entre si e  então exiba os novos resultados.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float x, y, z;

    printf("Entre com o primeiro valor: ");
    scanf("%f", &x);

    printf("Entre com o segundo valor: ");
    scanf("%f", &y);

    printf("\nAntes da troca:\nNum1 = %.2f e num2 = %.2f", x, y);
    z = x;
    x = y;
    y = z;

    printf("\nApos a troca:\nNum1 = %.2f e num2 = %.2f\n", x, y);

    return 0;
}
