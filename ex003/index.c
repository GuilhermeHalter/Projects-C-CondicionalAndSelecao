#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa
*/

int main(void)
{
    
    int number;
    float resto;
    
    printf("Digite um numero: ");
    scanf("%i",&number);
    
    resto = number % 2;
    
    if(resto == 0){
        number++;
        printf("%i ",number);
        printf("É um numero impar");
    }else{
        number--;
        printf("É um numero par");
    }
    
    return 0;
}
