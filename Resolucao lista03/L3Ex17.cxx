#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	printf("Entre com o numero: ");
	int num;
	scanf("%d", &num);


	float ex = 0;
	for(int i = 0 ; i <= num ; i++)
	{
	    int fatorial = 1;
	    for(int j = 1 ; j <= i ; j++ )
            fatorial *= j;

	    ex += pow(num, i) / fatorial;

	    printf("%.3f/%i ; ", pow(num, i), fatorial);
	}

	printf("\n\ne^x: %f\n", ex);
}
