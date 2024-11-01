#include<stdio.h>
#include<stdlib.h>

int main()
{
	int lado;

	printf("Entre com o valor do lado de um quadrado (Entre 0 e 20): ");
	scanf("%d", &lado);

	if(lado > 0 && lado < 20) {
	    for(int linhas = 0; linhas < lado ; linhas++)
	    {
	        for(int colunas = 0 ; colunas < lado ; colunas++)
	        {
	            printf("*");
	        }

	        printf("\n");
	    }
	}
	else {
	    printf("Valor inserido é invalido!\n");
	}

}
