#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que peça os 3 lados de um triângulo. 
O programa deverá informar se os valores podem formar
um triângulo, ou seja, a soma de dois lados não pode 
ser menor que o lado restante. Indique, caso os lados 
formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
*/

int main()
{
    
    int ladoP;
    int ladoS;
    int ladoT;
    
    printf("Digite o tamanho do lado triangulo");
    scanf("%i", &ladoP);
    printf("Digite o tamanho do outro lado triangulo");
    scanf("%i", &ladoS);
    printf("Digite o tamanho do ultimo lado triangulo");
    scanf("%i", &ladoT);

    if(ladoP > ladoS + ladoT){
        printf("triangulo invalido");
        return 0;
    }else if(ladoS > ladoP + ladoT){
        printf("triangulo invalido");
        return 0;
    }else if(ladoT > ladoS + ladoP){
        printf("triangulo invalido");
        return 0;
    }
    
    if(ladoP == ladoS && ladoP == ladoT && ladoS == ladoT){
        printf("Esse é um triangulo equilatero");
    }
    
    if(ladoP == ladoS && ladoP != ladoT || ladoT == ladoP && ladoT != ladoS || ladoT == ladoS && ladoT != ladoP){
        printf("Esse é um triangulo isoceles");
    }
    
    if(ladoP != ladoS && ladoP != ladoT || ladoT != ladoP && ladoT != ladoS || ladoT != ladoS && ladoT != ladoP){
        printf("Esse é um triangulo escaleno");        
    }
      
    return 0;
}