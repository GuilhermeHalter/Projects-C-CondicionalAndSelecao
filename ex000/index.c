#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça dois números e imprima o maior deles.
*/

int main(void)
{
    
    float numberUm;
    float numberDois;
    
    printf("Informe um numero: ");
    scanf("%f\n",&numberUm);
    
    printf("Informe outro numero: ");
    scanf("%f\n",&numberDois);
 
    if(numberUm > numberDois){
        printf("%.0f\n",numberUm);
    }else{
        printf("%.0f\n",numberDois);
    };
    
    return 0;
}