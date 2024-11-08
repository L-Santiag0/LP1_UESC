#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Entre com o numero: ");
	int num;
	scanf("%d", &num);
	
	
	int fatorial = 1;
	for(int i = 1 ; i <= num ; i++)
	{
	    fatorial *= i;
	}
	
	// Só é confiavél até o fatorial de 12
	printf("Fatorial: %d\n", fatorial);
}