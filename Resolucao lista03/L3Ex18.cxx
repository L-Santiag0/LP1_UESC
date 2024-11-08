#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Informe a quantidade de elementos da sequencia: ");
	int num;
	scanf("%d", &num);
	
	
	int soma = 0;
	for(int i = num ; i > 0 ; i--)
	{
	    printf("Entre com o numero: ");
	    scanf("%d", &num);
	    
	    soma += num;
	}
	
	printf("A soma da sequencia fornecida e: %d", soma);
}