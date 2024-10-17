/*
    2. Escreva um programa que peça ao usuário para fornecer dois números inteiros,
       obtenha-os do  usuário e imprima o maior deles seguido das
       palavras “e maior”. Se os números foram iguais,
       imprima a mensagem “estes números são iguais”. Use apenas a instrução if.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int num1, num2;

    printf("Entre com o primeiro numero: ");
    scanf("%d", &num1);

    printf("Entre com o segundo numero: ");
    scanf("%d", &num2);

    if(num1 > num2) {
        printf("%d e maior\n", num1);

    } else if(num2 > num1) {

        printf("%d e maior\n", num2);

    } else {

        printf("Estes numeros sao iguais\n");
    }

    return 0;
}
