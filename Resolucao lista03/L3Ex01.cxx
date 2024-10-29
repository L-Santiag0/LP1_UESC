#include<stdio.h>
#include<stdlib.h>

int main()
{
	float litros, km, taxa = 0, mediaTaxas = 0, cont = 0;


	printf("Entre com os litros consumidos (-1 para finalizar): ");
    scanf("%f", &litros);

	while(litros != -1)
	{
        printf("Entre com os quilometros percorridos: ");
        scanf("%f", &km);


        taxa = km / litros;
        cont++;
        mediaTaxas += taxa;


        printf("A taxa km/litro para esse tanque foi: %f\n\n", taxa);

        printf("Entre com os litros consumidos (-1 para finalizar): ");
	    scanf("%f", &litros);
	}

	if(cont == 0) cont = 1;

	mediaTaxas /= cont;

	printf("\nA taxa media total de km/litro foi: %f\n", mediaTaxas);

}
