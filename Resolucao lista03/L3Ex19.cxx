#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Entre com o numero (9999 para sair): ");
	int num;
	scanf("%d", &num);


	int cont = 0;
	float media = 0;
	while(num != 9999)
	{
	    media += num;
	    cont++;

	    printf("Entre com o numero (9999 para sair): ");
    	scanf("%d", &num);
	}

	if(cont == 0)
        cont = 1;

	media /= cont;

	printf("A media e: %f", media);
}
