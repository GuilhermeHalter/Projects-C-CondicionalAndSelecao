#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um número e exiba o
dia correspondente da semana. (1-Domingo, 2- Segunda,etc.), 
se digitar outro valor deve aparecer valor inválido.

*/

int main()
{
    
    int numero;
    printf("Informe um numero de 1 a 7 para ver qual dia é o semana correspondente\n");
    scanf("%i", &numero);
    
    if(numero == 1 ){
        printf("1 - Domingo");
    }else if(numero == 2){
        printf("2 - segunda");
    }else if(numero == 3){
        printf("3 - terça");
    }else if(numero == 4){
        printf("4 - quarta");
    }else if(numero == 5){
        printf("5 - quinta");
    }else if(numero == 6){
        printf("6 - sexta");
    }else if(numero == 7){
        printf("7 - sabado");
    }else{
        printf("numero Invalido");
    }
    
    return 0;
}