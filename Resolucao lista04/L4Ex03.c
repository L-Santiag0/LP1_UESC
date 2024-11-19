#include<stdio.h>


int multiplo(int, int);


int main()
{
    printf("Informe a quantidade de duplas para comparacao: ");
    int n;
    scanf("%d", &n);

    int num1, num2;
    for(int i = 0 ; i < n ; i++)
    {
        printf("Entre com o 1° numero: ");
        scanf("%d", &num1);

        printf("Entre com o 2° numero: ");
        scanf("%d", &num2);

        multiplo(num1, num2) ? printf("%d e multiplo de %d\n\n", num1, num2)
                             : printf("%d nao e multiplo de %d\n\n", num1, num2);
    }

}


int multiplo(int n1, int n2)
{
    return (n2 % n1 == 0) ? 1 : 0;
}
