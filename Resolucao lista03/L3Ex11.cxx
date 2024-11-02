#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, palindromo = 0;


	printf("Entre com o numero: ");
	scanf("%d", &num);


	int teste = num;
	while(teste > 0)
	{
    	 palindromo += teste % 10;
    	 palindromo *= 10 ;
    	 teste  /= 10;
    }
	palindromo /= 10;


	if(palindromo == num)
	     printf("Palindromo!\n");
	else
	     printf("Nao e Palindromo!\n");
}
