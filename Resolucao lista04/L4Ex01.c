#include<stdio.h>
#include<math.h>


float hipotenusa(float, float);


int main()
{
    printf("Informe o valor do cateto 1: ");
    float cateto1;
    scanf("%f", &cateto1);

    printf("Informe o valor do cateto 2: ");
    float cateto2;
    scanf("%f", &cateto2);

    printf("O comprimento da hipotenusa e: %.3f", hipotenusa(cateto1, cateto2));
}


float hipotenusa(float cat1, float cat2)
{
    return sqrt(((cat1 * cat1) + (cat2 * cat2)));
}
