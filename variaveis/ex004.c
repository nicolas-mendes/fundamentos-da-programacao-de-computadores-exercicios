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
