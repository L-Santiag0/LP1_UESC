#include<stdio.h>
#include<stdlib.h>

int main()
{
	float saldoDevedor, totalCredito, limiteCredito, cobrancasTotais, novoSaldo;
	short int numConta;


	printf("Entre com o numero da conta ( 0 para finalizar): ");
    scanf("%d", &numConta);

	while(numConta != 0)
	{
	    printf("Entre com o saldo devedor: ");
	    scanf("%f", &saldoDevedor);

	    printf("Entre com o total de cobrancas: ");
	    scanf("%f", &cobrancasTotais);

	    printf("Entre com o total de creditos: ");
	    scanf("%f", &totalCredito);

	    printf("Entre com o limite de credito: ");
	    scanf("%f", &limiteCredito);


	    novoSaldo = saldoDevedor + cobrancasTotais - totalCredito;


	    if(limiteCredito < novoSaldo) {

	        printf("\nConta: %d\n", numConta);
	        printf("Limite de credito: %f\n", limiteCredito);
	        printf("Saldo: %f\n", novoSaldo);
	        printf("Limite de Credito Excedido!\n\n\n");
	    }

	    printf("\nEntre com o numero da conta ( 0 para finalizar): ");
	    scanf("%d", &numConta);
	}
}
