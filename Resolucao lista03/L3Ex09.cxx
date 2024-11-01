#include<stdio.h>
#include<stdlib.h>

int main()
{
	int lado;

	printf("Entre com o valor do lado de um quadrado (Entre 0 e 20): ");
	scanf("%d", &lado);

	if(lado > 0 && lado < 20) {

        for(int i = 0 ; i < lado ; i++)
            printf("*");
        printf("\n");

        for(int i = 0 ; i < lado - 2 ; i++)
        {
            printf("*");

            for(int j = 0 ; j < lado - 2 ; j++)
                printf(" ");
            printf("*\n");
        }

        for(int i = 0 ; i < lado ; i++)
            printf("*");
        printf("\n");
	}
	else {
	    printf("Valor inserido é invalido!\n");
	}
}
