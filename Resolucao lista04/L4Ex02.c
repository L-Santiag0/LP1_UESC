#include<stdio.h>
#include<stdlib.h>


float potenciaInt(float, int);


int main()
{
    printf("Informe a base: ");
    float base;
    scanf("%f", &base);

    printf("Informe o expoente: ");
    int expoente;
    scanf("%d", &expoente);

    float pot;
    expoente >= 0 ? (pot = potenciaInt(base, expoente)) : (pot = (1 / potenciaInt(base, expoente)));

    printf("A potencia e: %.2f\n", pot);
}


float potenciaInt(float b, int ex)
{
    float potencia = 1;


    for(int i = 0 ; i < abs(ex) ; i++)
        potencia *= b;

    return potencia;
}
