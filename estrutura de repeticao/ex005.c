// Faça um programa que leia o número de termos e um valor positivo para X. Calcule e mostre o valor
// da série a seguir:

#include <stdio.h>
#include <math.h>

int main()
{
    int x, expoe, denom = 1, caseDenom, fat, cont, tot, i, j;
    float s = 0;

    printf("digite o numero de termos da soma: ");
    scanf(" %i",&tot);

    printf("digite um valor positivo para X: ");
    scanf(" %i",&x);

    for (i = 1; i <= tot; i++)
    {   
        cont = denom;
        fat = 1;
        expoe = i + 1;

        for (j = 1; j <= cont; j++)
        {
            fat = fat * j;
        }
        
        if (expoe & 1)
        {
            s = s + ((float)pow(x, expoe) / fat);   
        }
        else
        {
            s = s - ((float)pow(x, expoe) / fat);
        }

        if(denom == 4)
        {
            caseDenom = -1;
        }
        if(denom == 1)
        {
            caseDenom = 1;
        }

        if(caseDenom == 1)
        {
            denom = denom + 1;
        }
        else
        {
            denom = denom - 1;
        }

    }
    
    printf("A soma de %i termos para X = %i e: %.5f",tot,x,s);

    return 0;
}
