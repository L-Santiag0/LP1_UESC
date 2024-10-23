/*
    4. Escreva um programa que leia o raio de um círculo e imprima seu diâmetro,
    o valor de sua  circunferência e sua área.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float raio;

    printf("Entre com o valor do raio: ");
    scanf("%f", &raio);

    float diametro = raio * 2;
    printf("O valor do diametro e: %.2f\n", diametro);

    float circunferencia = 2 * 3.14 * raio;
    printf("O valor da circunferencia e: %.2f\n", circunferencia);

    float area = 3.14 * raio * raio;
    printf("O valor da area e: %.2f\n", area);

    return 0;
}
