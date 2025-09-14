// 6. Faça um programa que receba um número inteiro e verifique se é par ou ímpar.

#include <stdio.h>

int main()
{
    int n1;

    printf("Digite um numero qualquer: ");
    scanf("%i%*c",&n1);

    if (n1 & 1)
    {
        printf("O numero e impar");
    }
    else
    {
        printf("O numero e par");
    }

    return 0;
}
