// 6. Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber,
// sabendo-se que o funcionário tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.

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
