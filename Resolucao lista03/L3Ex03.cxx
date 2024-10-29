#include<stdio.h>
#include<stdlib.h>

int main()
{
	float vendas, salario = 0;


	printf("Entre com a venda (-1 para finalizar): ");
    scanf("%f", &vendas);

	while(vendas != -1)
	{
	    salario = 200 + 0.09 * vendas;

	    printf("Salario: %.2f\n\n", salario);

	    printf("Entre com a venda (-1 para finalizar): ");
	    scanf("%f", &vendas);
	}
}
