#include <stdio.h>

int main()
{
    int  n, i, j, fat, num;

    printf("Digite quantos fatorias quer calcular: ");
    scanf(" %i",&n);

    for (i = 1; i <= n; i++)
    {
        printf("Digite o valor que deseja saber o fatorial: ");
        scanf(" %i",&num);

        fat = 1;
        for (j = 1; j <= num; j++)
        {
            fat = fat * j;
        }
        printf(" O fatorial de %i e: %i \n",num,fat);
    }

    return 0;
}
