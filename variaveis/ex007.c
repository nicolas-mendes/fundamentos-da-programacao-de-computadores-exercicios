// 7. Faça um programa que receba o salário base de um funcionário, calcule e mostre seu salário a receber,
// sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre o salário base.

#include <stdio.h>
int main()
{
    float salario,salarioAjustado,imposto;


    printf("Digite o seu salario atual: ");
        scanf("%f%*c",&salario);

    imposto = salario * 10/100 ;
    salarioAjustado = salario + 50 - imposto;

    printf("O novo salario com bonificacao e imposto e: %.2f",salarioAjustado);

    return 0;
}
