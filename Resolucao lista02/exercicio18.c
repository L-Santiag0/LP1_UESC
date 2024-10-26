/*
    18. Idem ao exercício anterior, informe se for um triângulo equilátero.
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
        if(a == b && a == c) {
            printf("O triangulo e equilatero!\n");

        } else {
            printf("O triangulo nao e equilatero!\n");
        }

    } else {
        printf("Os valores informados NAO podem formar os lados de um triangulo!\n");
    }

    return 0;
}
