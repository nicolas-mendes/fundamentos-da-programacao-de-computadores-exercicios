// 4. Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
// Foram obtidos os seguintes dados:
// a) código da cidade;
// b) número de veículos de passeio;
// c) número de acidentes de trânsito com vítimas.
// Deseja-se saber:
// a) qual é o maior e qual é o menor índice de acidentes de trânsito e a que cidades pertencem;
// b) qual é a média de veículos nas cinco cidades juntas;
// c) qual é a média de acidentes de trânsito nas cidades com menos de 2.000 veículos de passeio. 

#include <stdio.h>

int main()
{
    int cont, cod, num_vei, num_acid, maior, cid_maior, menor, cid_menor, media_acid, soma_cid = 0, cont_acid = 0;
    float media_vei = 0.0;

    for (cont = 1; cont < 6; cont++)
    {
        printf("Digite o codigo da cidade: ");
        scanf(" %i",&cod);

        printf("Digite o total de veiculos de passeio: ");
        scanf(" %i",&num_vei);

        printf("Digite o numero de acidentes com vitima: ");
        scanf(" %i",&num_acid);

        if (cod == 1)
        {
            maior = num_acid;
            cid_maior = cod;
            menor = num_acid;
            cid_menor = cod;
        }
        else
        {
            if (num_acid > maior)
            {
                maior = num_acid;
                cid_maior = cod;
            }
            if (num_acid < menor)
            {
                menor = num_acid;
                cid_menor = cod;
            }
        }

        media_vei = media_vei + num_vei;
        
        if (num_vei < 2000)
        {
            soma_cid = soma_cid + num_acid;
            cont_acid = cont_acid + 1;
        }
    }
    media_acid = soma_cid / cont_acid;
    media_vei = media_vei / 5;

    printf(" \n menor indice de acidentes de transito: %i \n Cidade: %i \n",menor,cid_menor);
    printf(" \n maior indice de acidentes de transito: %i \n Cidade: %i \n",maior,cid_maior);
    
    printf(" media de veiculos nas cinco cidades juntas: %.2f \n",media_vei);

    if (cont_acid == 0)
    {
        printf("Nenhuma cidade tem menos de 2.000 veiculos");
    }
    else
    {
        printf("media de acidentes de transito nas cidades com menos de 2.000 veiculos de passeio: %i",media_acid);
    }
    

    return 0;
}