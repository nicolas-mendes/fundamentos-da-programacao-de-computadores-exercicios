#include <stdio.h>
#include <stdbool.h>

int main()
{
    int vet[3],temp,i,j;
    bool flag;

    printf("Digite o primeiro numero: ");
    scanf("%i%*c",&vet[0]);
    
    printf("Digite o segundo numero: ");
    scanf("%i%*c",&vet[1]);
    
    printf("Digite o terceiro numero: ");
    scanf("%i%*c",&vet[2]);

    for (i = 0; i < 3; i++)
    {   
        flag = false;

        for (j = 0; j < 3 - i; j++)
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
    
    printf("\n Numeros em ordem crescente: ");

    for (i = 0; i < 3; i++)
    {
        printf(" %i,",vet[i]);
    }
    


    return 0;
}
