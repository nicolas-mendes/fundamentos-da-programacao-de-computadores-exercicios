// 4. Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se
// que este sofreu um aumento de 25%.

#include <stdio.h>
int main()
{
    float salario,salarioAjustado;

    printf("Digite o seu salario atual: ");
        scanf("%f%*c",&salario);

    salarioAjustado = salario * 1.25;

    printf("O novo salario com ajuste de 25%% e: %.2f",salarioAjustado);

    return 0;
}
