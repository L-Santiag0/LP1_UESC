#include<stdio.h>
#include<stdlib.h>

int main()
{
	float horasTrabalhadas, pagamentoHora, salario;


	printf("Entre com o numero de horas trabalhadas (-1 para finalizar): ");
    scanf("%f", &horasTrabalhadas);

	while(horasTrabalhadas != -1) {

	    printf("Entre com o valor da hora normal de trabalho: ");
	    scanf("%f", &pagamentoHora);


	    if(horasTrabalhadas <= 40)
	        salario = horasTrabalhadas * pagamentoHora;
	    else
	        salario = (horasTrabalhadas - 40)  * (1.5 * pagamentoHora) + 40 * pagamentoHora;


	    printf("Salario: %.2f\n\n", salario);

	    printf("Entre com o numero de horas trabalhadas (-1 para finalizar): ");
	    scanf("%f", &horasTrabalhadas);

	}
}
