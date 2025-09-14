// 1. A nota final de um estudante é calculada a partir de três notas atribuídas, respectivamente, a um trabalho de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
// obedece aos pesos a seguir:
// Nota PESO
// Trabalho de laboratório 2
// Avaliação semestral 3
// Exame final 5
// Faça um programa que receba as três notas, calcule e mostre a média ponderada e o conceito que segue
// a tabela:
// MÉDIA PONDERADA CONCEITO
// 8,0 10,0 A
// 7,0 8,0 B
// 6,0 7,0 C
// 5,0 6,0 D
// 0,0 5,0 E

#include <stdio.h>

int main()
{
    float nota_trab, aval_sem, exame, media;

    printf("Digite a nota do Trabalho de Laboratorio: ");
    scanf("%f%*c",&nota_trab);

    printf("Digite a nota da Avaliacao Semestral: ");
    scanf("%f%*c",&aval_sem);

    printf("Digite a nota do Exame Final: ");
    scanf("%f%*c",&exame);

    media = (nota_trab * 2 + aval_sem * 3 + exame * 5) / 10;

    printf("Media Ponderada: %.2f ",media);

    if (media>=8 && media <= 10)
    {
        printf("Obteve conceito A");
    }

    if (media>=7 && media < 8)
    {
        printf("Obteve conceito B");
    }
    
    if (media>=6 && media < 7)
    {
        printf("Obteve conceito C");
    }

    if (media>=5 && media < 6)
    {
        printf("Obteve conceito D");
    }

    if (media>=0 && media < 5)
    {
        printf("Obteve conceito E");
    }

    return 0;
}
