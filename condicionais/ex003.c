// 3. Faça um programa que receba dois números e mostre o maior.

#include <stdlib.h>

int main()
{
    int n1,n2;

    printf("Digite o primeiro numero: ");
    scanf("%i%*c",&n1);
    
    printf("Digite o segundo numero: ");
    scanf("%i%*c",&n2);

    if (n1 > n2)
    {
        printf("O primeiro numero: %i \n e maior que o segundo: %i",n1,n2);
    }
    if (n2 > n1)
    {
        printf("O segundo numero: %i \n e maior que o primeiro: %i",n2,n1);
    }
    else
    {
        printf("os numeros sao iguais");
    }


    return 0;
}
