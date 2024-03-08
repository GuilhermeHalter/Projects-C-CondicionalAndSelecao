#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.
*/

int main()
{
    int numbers[3];
    
    for(int i = 0; i < 3; ++i){
        printf("Digite um numero ");
        scanf("%d", &numbers[i]);        
    };
    
    if(numbers[0] < numbers[1] && numbers[0] < numbers[2] && numbers[1] < numbers[2]){
        printf("%d%d%d", numbers[0], numbers[1], numbers[2]);
    }
    if(numbers[1] < numbers[0] && numbers[1] < numbers[2] && numbers[0] < numbers[2]){
        printf("%d%d%d", numbers[1], numbers[0], numbers[2]);
    }
    if(numbers[2] < numbers[1] && numbers[2] < numbers[0] && numbers[0] < numbers[1]){
        printf("%d%d%d", numbers[2], numbers[1], numbers[0]);
    }
    if(numbers[1] < numbers[0] && numbers[1] < numbers[2] && numbers[2] < numbers[0]){
        printf("%d%d%d", numbers[1], numbers[2], numbers[0]);
    }
    if(numbers[0] < numbers[1] && numbers[0] < numbers[2] && numbers[2] < numbers[1]){
        printf("%d%d%d", numbers[0], numbers[2], numbers[1]);
    }
    if(numbers[2] < numbers[0] && numbers[2] < numbers[1] && numbers[1] < numbers[0]){
        printf("%d%d%d", numbers[2], numbers[1], numbers[0]);
    }

    return 0;
}