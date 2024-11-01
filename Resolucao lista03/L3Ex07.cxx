#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, maior1, maior2, cont = 1;

	printf("Entre com o numero: ");
    scanf("%d", &num);
	maior1 = num;
	maior2 = num - 1;

	while(cont < 10)
	{
	    printf("Entre com o numero: ");
	    scanf("%d", &num);

	    if (num > maior1)
	    {
	        maior2 = maior1;
	        maior1 = num;
	    }
	    else if(num > maior2)
	    {
	       maior2 = num;
	    }

	    cont++;
	 }

	 printf("Maior: %d\n", maior1);
	 printf("Segundo maior: %d\n", maior2);
}
