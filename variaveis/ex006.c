#include <stdio.h>
int main()
{
    float salario,salarioAjustado,bonus,imposto;


    printf("Digite o seu salario atual: ");
        scanf("%f%*c",&salario);

    bonus = salario * 5/100;
    imposto = salario * 7/100 ;
    salarioAjustado = salario + bonus - imposto;

    printf("O novo salario com bonificacao e imposto e: %.2f",salarioAjustado);

    return 0;
}
