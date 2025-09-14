// 2. Faça um programa que receba três notas, calcule e mostre a média aritmética. 

#include <stdio.h>
int main()
{
    float nota1,nota2,nota3,media;

    printf("Digite a primeira nota: ");
        scanf("%f%*c",&nota1);
    
    printf("Digite a segunda nota: ");
        scanf("%f%*c",&nota2);
    
    printf("Digite a terceira nota: ");
        scanf("%f%*c",&nota3);

    media = (nota1+nota2+nota3)/3;

    printf("A media aritmetica das 3 notas e: %.2f",media);

    return 0;
}
