/*
     Elabore um programa que transforme uma temperatura fornecida em ±C para a temperatura
     correspondente em ±F, a fórmula de conversão é:

        C * (9/5) + 32 = F

*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float c, f;

    printf("Informe o valor da temperatura em Celsius: ");
    scanf("%f", &c);

    f = c * 9 / 5 + 32;

    printf("A temperatura %.1f°C e igual a: %.1f°F\n", c, f);

    return 0;
}
