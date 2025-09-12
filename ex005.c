#include <stdio.h>
int main()
{
    float salario,salarioAjustado;
    int ajuste;

    printf("Digite o seu salario atual: ");
        scanf("%f%*c",&salario);
    
    printf("Digite o ajuste a ser aplicado (em %%): ");
        scanf("%i%*c",&ajuste);

    salarioAjustado = salario * (1 + ajuste*0.01);

    printf("O novo salario com ajuste de %i%% e: %.2f",ajuste,salarioAjustado);

    return 0;
}
