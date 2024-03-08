#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia a idade de quatro alunos e apresente a mensagem conforme instruções: 
Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma Jovem"; 
Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma Adulta"; 
Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem "Turma Idosa". 
 
*/

int main()
{
    int Idade[4];
    int soma;
    int media;
    
    for(int i = 0; i < 4; ++i){
        printf("Digite a idade ");
        scanf("%d", &Idade[i]);        
    };
    
    
    soma = Idade[0]+Idade[1]+Idade[2]+Idade[3];
    media = soma/4;
    
    if(media < 25){
        printf("Turma jovem!!");
    }
    if(media >= 25 && media <= 40){
        printf("Turma Adulta!");
    }
    if(media > 40){
        printf("Turma Idosa");
    }

    return 0;
}