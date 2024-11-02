#include<stdio.h>
#include<stdlib.h>

int main()
{
	printf("Entre com o numero: ");
	int num;
	scanf("%d", &num);


	int pot = 1;
	while(pot <= num)
	{
        pot *= 10;
	}
	pot /= 10;


	int cont7 = 0;
    while(pot > 0)
    {
        if(num % 10 == 7)
            cont7++;

        num /= 10;
        pot /= 10;
    }

    printf("A soma de todos os 7 e: %d\n", cont7);
}
