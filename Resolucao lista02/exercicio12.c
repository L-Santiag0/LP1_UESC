/*
    12. Escreva um programa que leia os coeficientes de um polinômio de segundo grau
    na forma ax2 + bx + c. Calcule as raízes reais do polinômio,
    se o polinômio não tiver raízes reais uma mensagem de erro
    deve ser mostrada.
    (Utilize a função sqrt() do arquivo de cabeçalho math.h para calcular a raiz  quadrada.)
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
    float a, b, c;

    printf("Informe o valor do coeficiente a: ");
    scanf("%f", &a);

    printf("Informe o valor do coeficiente b: ");
    scanf("%f", &b);

    printf("Informe o valor do coeficiente c: ");
    scanf("%f", &c);

    float delta = (b * b) - 4 * a * c;

    if (delta >= 0) {

        float r1 = (-b + sqrt(delta)) / (2 * a);
        float r2 = (-b - sqrt(delta)) / (2 * a);

        printf("Raiz 1: %.2f\n", r1);
        printf("Raiz 2: %.2f\n", r2);

    } else {

        printf("ERRO! Não existem raizes reais.\n");
    }

    return 0;
}
