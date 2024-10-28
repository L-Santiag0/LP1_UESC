/*
    20. O desconto do IRRF (Imposto de Renda Retido na Fonte), é calculado sobre o salário líquido após a
    dedução da contribuição ao INSS, de acordo com a seguinte tabela

    Amplie o programa do exercício anterior para uma vez recebido o salário bruto informe a contribuição ao INSS,
    o valor do IRRF e o salário líquido.

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

    float IRRF;
    if(salarioLiquido >= 0 && salarioLiquido <= 900)
    {
        IRRF = 0;

    } else if(salarioLiquido > 900 && salarioLiquido <= 1800){
        IRRF = salarioLiquido * 0.15;

    } else {
        IRRF = salarioLiquido * 0.275;
    }

    salarioLiquido = salarioLiquido - IRRF;

    printf("Salario Bruto: R$ %.2f\n", salarioBruto);
    printf("Contribuicao INSS: R$ %.2f\n", desconto);
    printf("Valor do IRRF: R$ %.2f\n", IRRF);
    printf("Salario Liquido: R$ %.2f\n", salarioLiquido);

    return 0;
}
