#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa para controle de temperatura de um forno que derrete alumínio. O programa deverá perguntar qual temperatura que o alumínio deverá ser trabalhado e operar nas seguintes condições: 
Se temperatura for inferior ou igual 500o C enviar uma mensagem para tela "Temperatura Inválida"; 
Se temperatura for menor do que 700o C enviar uma mensagem para tela "Aquecimento Ligado em 100%"; 
Se temperatura for menor do que 735o C enviar uma mensagem para tela "Aquecimento Ligado em 50%"; 
Se temperatura for maior ou igual 735o C enviar uma mensagem para tela "Aquecimento Desligado"; 
Se temperatura for maior do que 780o C enviar uma mensagem para tela "SUPERAQUECIMENTO"; 
Os valores digitados devem ser inteiros e inferiores de 1000.

*/

int main()
{
    
    int trabalhoAluminio;
    
    printf("Em qual temperatura voce vai trabalhar com o alumínio? (oC)");
    scanf("%i", &trabalhoAluminio);
    
    if(trabalhoAluminio <= 500){
        printf("Temperatura Inválida");
    }else if(trabalhoAluminio < 700){
        printf("Aquecimento Ligado em 100");
    }else if(trabalhoAluminio < 730){
        printf("Aquecimento Ligado em 50");
    }else if(trabalhoAluminio >= 730){
        printf("Aquecimento Desligado");
    }else if(trabalhoAluminio > 780){
        printf("SUPERAQUECIMENTO!!!");
    }else if(trabalhoAluminio > 1000){
        return 0 ;
    }
    
    return 0;
}