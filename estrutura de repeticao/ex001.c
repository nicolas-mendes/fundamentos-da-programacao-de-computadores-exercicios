// 1. Um funcionário de uma empresa recebe, anualmente, aumento salarial. Sabe-se que:
// a) Esse funcionário foi contratado em 2005, com salário inicial de R$ 1.000,00.
// b) Em 2006, ele recebeu aumento de 1,5% sobre seu salário inicial.
// c) A partir de 2007 (inclusive), os aumentos salariais sempre corresponderam ao dobro do percentual do ano
// anterior.
// Faça um programa que determine o salário atual desse funcionário

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