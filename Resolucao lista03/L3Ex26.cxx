#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Entra com a quantidade de termos: ");
	int quant;
	scanf("%d", &quant);

	float soma = 0;
	int den = 1;
	for (int i = 0; i < quant ; i++)
	{
        if(i % 2 == 1)
            soma -= (4.0 / den);
        else
            soma += (4.0 / den);

	    printf("Termo %d: %f\n", i + 1, soma);
	    den += 2;
    }
}
