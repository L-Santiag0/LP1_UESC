#include<stdio.h>
#include<stdlib.h>


int main()
{
    int numConta;
    float antigoLimite, saldo;


    for(int i = 0 ; i < 3 ; i++)
    {
        printf("Informe o numero da conta do %d° cliente: ", i + 1);
        scanf("%d", &numConta);

        printf("Informe o limite antes da recessão: ");
        scanf("%f", &antigoLimite);

        printf("Informe o saldo atual: ");
        scanf("%f", &saldo);

        float novoLimite = antigoLimite / 2.0;
        printf("O novo limite e: %2.f\n\n", novoLimite);

        if(novoLimite < saldo)
            printf("O saldo do cliente da conta %d execedeu o limite!\n\n", numConta);
    }
}
