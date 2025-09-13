#include <stdio.h>

int main()
{
    int  n, i, j, fat;
    float e = 1.0;
    
    printf("Digite um numero inteiro positivo qualquer: ");
    scanf(" %i",&n);

    for (i = 1; i <= n; i++)
    {
        fat = 1;

        for (j = 1; j <= i; j++)
        {
            fat = fat * j;
        }

        e = e + ( 1.0f / fat );  
    }
    printf("E = %.2f",e);

    return 0;
}
