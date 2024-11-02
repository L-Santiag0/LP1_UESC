#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, palindromo = 0;

	printf("Entre com o numero: ");
	scanf("%d", &num);

	int teste = num;

	if(num >= 10000 && num <= 99999) {

	    for(int i = 0 ; i < 5 ; i++)
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
	else {
	    printf("Valor invalido!\n");
	}
}
