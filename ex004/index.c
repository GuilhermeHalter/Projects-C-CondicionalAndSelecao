#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça um número e informe se o número é inteiro ou quebrado
*/

int main()
{
    float number;
    
    printf("Insira um numero ");
    scanf("%f",&number);
    
    if((int)number == number){
        printf("O numero digitado é INTEIRO");
    }else{
        printf("O numero digitado é QUEBRADO");
    }

    return 0;
}
