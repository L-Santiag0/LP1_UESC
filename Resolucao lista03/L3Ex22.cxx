#include<stdio.h>
#include<stdlib.h>

int main()
{
	int produto = 1;
	
	for (int i = 1 ; i <= 15 ; i += 2)
	    produto *= i;
	    
	printf("O produto dos impares de 1 a 15, e: %d\n", produto);
}