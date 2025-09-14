// 9. Faça um programa que receba duas notas de seis alunos. Calcule e mostre:
// ■■ a média aritmética das duas notas de cada aluno; e
// ■■ a mensagem que está na tabela a seguir:
// média ariTméTica - mensagem
    // Até 3 - Reprovado
    // Entre 3 e 7 - Exame
    // De 7 para cima  - Aprovado
// ■■ o total de alunos aprovados;
// ■■ o total de alunos de exame;
// ■■ o total de alunos reprovados;
// ■■ a média da classe. 

#include <stdio.h>

int main()
{
    float nota1, nota2, media, media_tur = 0;
    int tot_aprov = 0, tot_exam = 0, tot_rep = 0, i;

    for (i = 1; i < 7; i++)
    {
        printf("Digite a primeira nota: ");
        scanf("%f%*c",&nota1);

        printf("Digite a segunda nota: ");
        scanf("%f%*c",&nota2);

        media = (nota1 + nota2) / 2;
        media_tur = media_tur + media;

        printf("Media Aritmetica do %i aluno: %.2f \n",i,media);

        if (media>=0 && media < 3)
        {
            printf("Reprovado \n");
            tot_rep = tot_rep + 1;
        }

        if (media>=3 && media < 7)
        {
            printf("Exame \n");
            tot_exam = tot_exam + 1;
        }
        
        if (media>=7 && media <= 10)
        {
            printf("Aprovado \n");
            tot_aprov = tot_aprov + 1;
        }
    }

    media_tur = media_tur / 6;

    printf("Total de Alunos Aprovados: %i \n",tot_aprov);
    printf("Total de Alunos de Exame: %i \n", tot_exam);
    printf("Total de Alunos Reprovados: %i \n",tot_rep);
    printf("Media Aritmetica da Turma: %.2f \n",media_tur);

    return 0;
}
