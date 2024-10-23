/*
    10. Escreva um programa que calcule o quadrado e o cubo dos números do 1 ao 10
    e use tabulações para  imprimir o resultado da seguinte forma:
    número quadrado cubo
       0      0      0
       1      1      1
       2      4      8
       3      9      27
       4      16     64
       5      25     125
       6      36     216
       7      49     343
       8      64     512
       9      81     729
       10     100    1000
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("Numero: \t Quadrado: \t Cubo:\n");
    for(int i = 0 ; i <= 10; i++)
    {
        int pot2 = i * i;
        int pot3 = i * i * i;

        printf("%d \t\t %d \t\t %d\n", i, pot2, pot3);
    }

    return 0;
}
