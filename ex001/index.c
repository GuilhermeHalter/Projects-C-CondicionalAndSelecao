#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo
*/

int main(void)
{
    
    float number;
    
    printf("Digite um numero: ");
    scanf("%f",&number);
    
    if(number > 0){
        printf("É um numero positivo");
    }else{
        printf("É um numero negativo");
    }
    
    return 0;
}
