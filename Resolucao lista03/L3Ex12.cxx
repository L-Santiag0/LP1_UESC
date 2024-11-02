#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	printf("Entre com o numero: ");
	int num;
	scanf("%d", &num);


	int cont = 1, pot = 0;
	while(cont <= num)
    {
        pot++;
        cont *= 10;
    }
    pot--;


	int resultadoPot10, resultadoPot2, valorDecimal = 0;
	while(pot >= 0)
	{
        resultadoPot10 = (int)(pow(10, pot) + 0.5);
        resultadoPot2 = (int)(pow(2, pot) + 0.5);


	    if(num / resultadoPot10 == 1 || num / resultadoPot10 == 0) {

            valorDecimal += (num / resultadoPot10) * resultadoPot2;
            num = num % resultadoPot10;
            pot--;
	    }
	    else {

	        printf("Numero invalido! Nao e binario.\n");
	        valorDecimal = -1;
	        break;
	    }
	}

	if(valorDecimal >= 0)
    	printf("Valor decimal: %d\n", valorDecimal);
}
