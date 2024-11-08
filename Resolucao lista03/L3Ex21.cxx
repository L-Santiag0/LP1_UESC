#include<stdio.h>
#include<stdlib.h>

int main()
{
	int soma = 0;

	for(int i = 2 ; i <= 30 ; i += 2)
	    soma += i;

	printf("A soma dos valores pares de 0 a 30 e: %d\n", soma);
}
