// 8. Faça um programa que leia o número de termos, determine e mostre os valores de acordo com a série
// a seguir:
// Série = 2, 7, 3, 4, 21, 12, 8, 63, 48, 16, 189, 192, 32, 567, 768...

#include <stdio.h>

int main()
{
    int i = 4, num_termos, num1 = 2, num2 = 7, num3 = 3;
    printf("Digite o numero total de termos da sequencia: ");
    scanf(" %i",&num_termos);

    printf(" %i, %i, %i,",num1,num2,num3);

    while (i != num_termos)
    {
        num1 = num1 * 2;
        printf(" %i,",num1);
        i = i+1;

        if(i != num_termos)
        {
            num2 = num2 * 3;
            printf(" %i,",num2);
            i = i+1;
        }

        if(i != num_termos)
        {
            num3 = num3 * 4;
            printf(" %i,",num3);
            i = i+1;
        }
        
    }

    return 0;
}
