#include<stdio.h>
#include<stdlib.h>

int main()
{
	int lado1, lado2, lado3;

	printf("Entre com o primeiro lado: ");
	scanf("%d", &lado1);

	printf("Entre com o segundo lado: ");
	scanf("%d", &lado2);

	printf("Entre com o terceiro lado: ");
	scanf("%d", &lado3);


	if(lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
	    printf("Erro! Valores invalidos.\n");
	}
	else {

	    if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
	        printf("Podem ser os lados de um triangulo retangulo!\n");
	    else
	        printf("Nao podem ser os lados de um triangulo retangulo\n");
	}
}
