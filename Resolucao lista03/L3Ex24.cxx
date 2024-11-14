#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Entre com o valor do lado: ");
	int lado;
	scanf("%d", &lado);

	// Padrao 1
	for(int linhas = 0 ; linhas < lado ; linhas++)
	{
	    for(int colunas = 0 ; colunas <= linhas ; colunas++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}


	printf("\n\n");


	// Padrao 2
	for(int linhas = lado ; linhas > 0 ; linhas--)
	{
	    for(int colunas = 0 ; colunas < linhas ; colunas++)
	    {
	        printf("*");
	    }
	    printf("\n");
	}


	printf("\n\n");


	// Padrao 3
	for(int linhas = 0 ; linhas < lado ; linhas++)
	{
	    for(int espacos = 0; espacos < linhas ; espacos++)
	    {
	        printf(" ");
	    }
	    for(int colunas = 0 ; colunas < lado - linhas ; colunas++)
	    {
	        printf("*");
	    }

	    printf("\n");
	}


	printf("\n\n");


	// Padrao 4
	for(int linhas = 1 ; linhas <= lado ; linhas++)
	{
	    for(int espacos = 1 ; espacos <= lado - linhas ; espacos++)
	    {
	        printf(" ");
	    }

	    for(int colunas =  1 ; colunas <= linhas ; colunas++)
	    {
	        printf("*");
	    }

	    printf("\n");
	}

}
