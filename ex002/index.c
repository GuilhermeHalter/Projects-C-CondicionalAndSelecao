#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça um número e imprima se o número é par ou ímpar
*/

int main(void)
{
    
    int number;
    float resto;
    
    printf("Digite um numero: ");
    scanf("%i",&number);
    
    resto = number % 2;
    
    if(resto == 0){
        printf("É um numero par");
    }else{
        printf("É um numero impar");
    }
    
    return 0;
}