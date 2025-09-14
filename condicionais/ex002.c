// 2. Faça um programa que receba três notas de um aluno, calcule e mostre a média aritmética e a mensagem
// constante na tabela a seguir. Aos alunos que ficaram para exame, calcule e mostre a nota que deverão
// tirar para serem aprovados, considerando que a média exigida é 6,0.
// MÉDIA aritmética mensa gem
// 0,0 3,0 Reprovado
// 3,0 7,0 Exame
// 7,0 10,0 Aprovado

#include <stdio.h>

int main()
{
    float nota1,nota2,nota3, media, nota_exame;

    printf("Digite a primeira nota: ");
    scanf("%f%*c",&nota1);

    printf("Digite a segunda nota: ");
    scanf("%f%*c",&nota2);

    printf("Digite a terceira nota: ");
    scanf("%f%*c",&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("Media Aritmetica: %.2f \n",media);

    if (media>=0 && media < 3)
    {
        printf("Reprovado");
    }

    if (media>=3 && media < 7)
    {
        printf("Exame \n");
        nota_exame = 12 - media;
        printf("Deve tirar %.2f no exame final", nota_exame);
    }
    
    if (media>=7 && media <= 10)
    {
        printf("Aprovado");
    }

    return 0;
}
