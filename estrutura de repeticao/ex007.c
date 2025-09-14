// 7. Faça um programa que monte os oito primeiros termos da sequência de Fibonacci.

#include <stdio.h>

int main()
{
    int cont = 8,i,vet[8]={0,1};

    printf("8 primeiros termos da sequencia fibonnaci: 0, 1,");

    for (i = 2; i < cont; i++)
    {
        vet[i] = vet[i-1] + vet[i-2];
        printf(" %i,",vet[i]); 
    }
    
    return 0;
}
