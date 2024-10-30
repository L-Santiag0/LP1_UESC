#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num, maior, cont = 1;

	printf("Entre com o numero: ");
    scanf("%d", &num);
	maior = num;

	while(cont < 10)
	{
	    printf("Entre com o numero: ");
	    scanf("%d", &num);

	    if (num > maior)
	        maior = num;

	    cont++;
	 }

	 printf("Maior: %d", maior);
}
