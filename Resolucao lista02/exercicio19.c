/*
    19. A contribuição para o INSS (interessante para estrutura condicional por ser progressivo)
    é calculada  da seguinte forma:

    a. Salário bruto até três salários mínimos - 8%
    b. Salário bruto acima de três salários mínimos - 10%
    c. Para contribuições que seriam maiores que o salário mínimo, a importância é de um salário  mínimo.

    Elabore um programa que, para uma entrada do salário bruto, informe a contribuição
    ao INSS e o  salário líquido restante.

    salario minimo em 17/09/2024 = R$ 1412,00

*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    float salarioBruto, desconto, salarioMin = 1412;

    printf("Informe o salario bruto: ");
    scanf("%f", &salarioBruto);

    if (salarioBruto <= salarioMin * 3) {
        desconto = salarioBruto * 0.08;
    } else {
        desconto = salarioBruto * 0.1;
    }

    float salarioLiquido = salarioBruto - desconto;

    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Contribuicao INSS: R$ %.2f\n", desconto);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
