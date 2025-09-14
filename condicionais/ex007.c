// 7. Faça um programa que receba quatro valores: I, A, B e C. Desses valores, I é inteiro e positivo, A, B e
// C são reais. Escreva os números A, B e C obedecendo à tabela a seguir.
// Suponha que o valor digitado para I seja sempre um valor válido, ou seja, 1, 2 ou 3, e que os números
// digitados sejam diferentes um do outro.
// VALor dE i ForMA A EsCrEVEr
// 1 A, B e C em ordem crescente.
// 2 A, B e C em ordem decrescente.
// 3 O maior fica entre os outros dois números

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n1,i,j;
    float vet[3],temp;
    bool flag;
    
    printf("Digite tres numeros reais: ");
    scanf("%f%*c",&vet[0]);
    scanf("%f%*c",&vet[1]);
    scanf("%f%*c",&vet[2]);

    printf("Escolha uma opcao abaixo: \n 1. A, B e C em ordem crescente. \n 2. A, B e C em ordem decrescente. \n 3. O maior fica entre os outros dois numeros. \n");
    scanf(" %i", &n1);

    for (i = 0; i < 3; i++)
    {   
        flag = false;

        for (j = 0; j < 3 - i - 1; j++)
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

    switch (n1)
    {
        case 1 :
            printf("\n Numeros em ordem crescente: ");
            for (i = 0; i < 3; i++)
            {
                printf("%.2f, ",vet[i]);
            }
            break;

        case 2 :
            printf("\n Numeros em ordem decrescente: ");
            for (i = 2; i >= 0; i--)
            {
                printf("%.2f, ",vet[i]);
            }
            break;
            
        case 3 :
            temp = vet[2];
            vet[2] = vet[1];
            vet[1] = temp;
            printf("\n O maior entre os outros dois numeros: ");
            for (i = 0; i < 3; i++)
            {
                printf("%.2f, ",vet[i]);
            }
            break;

        default :
            printf("\n Opcao invalida");
            break;
    }
    
    return 0;
}
