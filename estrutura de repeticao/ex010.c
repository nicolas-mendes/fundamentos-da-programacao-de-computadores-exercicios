// 10. Em um campeonato de futebol existem cinco times e cada um possui onze jogadores. Faça um programa que receba a idade, o peso e a altura de cada um dos jogadores, calcule e mostre:
// ■■ a quantidade de jogadores com idade inferior a 18 anos;
// ■■ a média das idades dos jogadores de cada time;
// ■■ a média das alturas de todos os jogadores do campeonato; e
// ■■ a porcentagem de jogadores com mais de 80 kg entre todos os jogadores do campeonato. 

#include <stdio.h>

int main()
{
    int cont_time, cont_jog, idade, qtde = 0;
    float peso, alt, media_idade, media_altura = 0,tot80 = 0;

    for (cont_time = 1; cont_time <= 5; cont_time++)
    {
        media_idade = 0;

        for (cont_jog = 1; cont_jog <= 11; cont_jog++)
        {
            
            printf("digite a idade do %i jogador: ",cont_jog);
            scanf(" %i",&idade);
            
            printf("digite o peso do %i jogador: ",cont_jog);
            scanf(" %f",&peso);
            
            printf("digite a altura do %i jogador: ",cont_jog);
            scanf(" %f",&alt);

            if(idade < 18)
            {
                qtde = qtde + 1;
            }

            media_idade = media_idade + idade;
            media_altura = media_altura + alt;

            if (peso > 80)
            {
                tot80 = tot80 + 1;
            }
        }  
        
        media_idade = media_idade / 11;
        printf("media de idade %.2f dos jogadores do %i time \n",media_idade,cont_time);

    }
    media_altura = media_altura / 55;
    tot80 = tot80 * 100.0 /55;

    printf("Quantidade de Jogadores com menos de 18 anos: %i \n",qtde);
    printf("Media de altura de todos os Jogadores: %.2f \n",media_altura);
    printf("Porcentagem de jogadores com mais de 80kg: %.2f%% \n",tot80);

    return 0;
}
