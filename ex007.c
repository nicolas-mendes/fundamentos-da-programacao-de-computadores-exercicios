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
