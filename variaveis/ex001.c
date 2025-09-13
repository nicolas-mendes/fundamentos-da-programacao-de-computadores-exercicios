#include <stdio.h>
int main()

{
int num1,num2,num3,num4,soma;

    printf("Digite o primeiro numero: ");
        scanf("%d%*c",&num1);
    
    printf("Digite o segundo numero: ");
        scanf("%d%*c",&num2);
    
    printf("Digite o terceiro numero: ");
        scanf("%d%*c",&num3);
    
    printf("Digite o quarto numero: ");
        scanf("%d%*c",&num4);

    soma = num1+num2+num3+num4; 

    printf("A soma dos 4 numeros será: %d",soma);

}