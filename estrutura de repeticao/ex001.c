#include <stdio.h>

int main()
{ 
    int ano;
    float salario=1000, aumento=0.015;

    salario = salario * (1 + aumento);
    
    for (ano=2007;ano<2026;ano++){
        aumento=aumento*2;
        salario = salario * (1 + aumento);
    }
    printf("em %d o salario e de R$%.2f e o aumento de %.2f porcento \n",ano-1,salario,aumento);

    return 0;
}