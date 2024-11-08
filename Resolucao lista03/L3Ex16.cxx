#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Entre com o numero: ");
	int num;
	scanf("%d", &num);


	int numAnterior = 1,  fibonnaci = 0, numAtual = 0;
	for(int i = 1 ; i <= num ; i++)
	{
	    printf("%d; ", fibonnaci);
	    fibonnaci += numAnterior;
	    numAnterior = numAtual;
	    numAtual = fibonnaci;
	}

}
