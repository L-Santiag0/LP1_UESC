#include<stdio.h>
#include<stdlib.h>

int main()
{
	float valorEmprestimo, taxaJuros;
	double juros;
	short int dias;

	printf("Entre com o valor do emprestimo (0 para finalizar): ");
    scanf("%f", &valorEmprestimo);

	while(valorEmprestimo != 0)
	{
	    printf("Entre com a taxa de juros (Ex.: 0.5): ");
	    scanf("%f", &taxaJuros);

	    printf("Entre com o periodo do emprestimo (em dias): ");
	    scanf("%d", &dias);

	    juros = valorEmprestimo * taxaJuros * (dias / 365.0);

	    printf("Juros: %.2f\n", juros);

	    printf("Entre com o valor do emprestimo (0 para finalizar): ");
	    scanf("%f", &valorEmprestimo);
	}


}
