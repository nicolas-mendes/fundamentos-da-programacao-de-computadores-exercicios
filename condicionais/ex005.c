// 5. Faça um programa que receba três números obrigatoriamente em ordem crescente e um quarto número que não siga essa regra. Mostre, em seguida, os quatro números em ordem decrescente. Suponha
// que o usuário digitará quatro números diferentes.

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int vet[4],temp,i,j;
    bool flag;

    printf("Digite tres numeros em ordem crescente: ");
    scanf("%i%*c",&vet[0]);
    scanf("%i%*c",&vet[1]);
    scanf("%i%*c",&vet[2]);
    
    printf("Digite um quarto numero (fora de ordem): ");
    scanf("%i%*c",&vet[3]);

    for (i = 0; i < 4; i++)
    {   
        flag = false;

        for (j = 0; j < 4 - i - 1; j++)
        {
            if (vet[j] > vet[j+1])
            {
                temp = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = temp;
                flag = true;
            }
        }
        if(!flag)
        {
            break;
        }
    }
    
    printf("\n Numeros em ordem decrescente: ");

    for (i = 3; i >= 0; i--)
    {
        printf("%i, ",vet[i]);
    }
    
    return 0;
}
