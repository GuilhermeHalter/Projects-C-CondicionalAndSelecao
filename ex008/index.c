#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça três notas de um aluno e calcule a média. 
*/

int main()
{
    int notas[3];
    int soma;
    int media;
    
    for(int i = 0; i < 3; ++i){
        printf("Digite uma nota ");
        scanf("%d", &notas[i]);        
    };
    
    soma = notas[0] + notas[1] + notas[2];
    media = soma/3;
    
    printf("%i",media);

    return 0;
}