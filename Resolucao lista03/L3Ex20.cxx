#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Entre com o valor: ");
	int n;
	scanf("%d", &n);
	
	
	int maior = 0, menor = 0;
	for(int i = 0 , j = n ; i < j ; i++)
	{
	    printf("Entre com o valor: ");
	    scanf("%d", &n);
	    
	    if(i == 0)
	        maior = menor = n;
	      
	    if(n > maior)
	        maior = n;
	    
	    if(n < menor)
	        menor = n;
	}
	
	printf("\nO maior numero e: %d\n", maior);
	printf("O menor numero e: %d\n", menor);
}