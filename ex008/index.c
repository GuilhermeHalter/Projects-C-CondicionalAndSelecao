#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça três notas de um aluno e calcule a média. 
Analisar a média e imprimir uma das mensagens a seguir:
A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada; 
A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada; 
A mensagem "Aprovado com Distinção", se a média for igual a 10. 
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

    if(media >= 7){
        printf("\nAprovado!!");
    }
    if(media < 7){
        printf("\nReprovado");
    }
    if(media == 10){
        printf("\nAprovado com distinção");
    }

    return 0;
}