#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Faça um programa que calcule uma equação do 2o.
grau, na forma x2+bx+c. O programa deve fazer
todas as consistências de dados e informar caso 
o usuário entre com dados errados. Deve ainda 
informar se o delta é positivo ou negativo, 
e os valores de X quando existirem
*/

int main()
{
    
    int a;
    int b;
    int c;
    float delta;
    float baskaraNegativo;
    float baskaraPositivo;
    
    printf("Defina o valor de A: ");
    scanf("%i", &a);
    
    printf("Defina o valor de B: ");
    scanf("%i", &b);
    
    printf("Defina o valor de C: ");
    scanf("%i", &c);
    
    delta = (b*b) - (4*a*c);
    
    baskaraPositivo = (-b + sqrt(delta))/(2*a);
    
    baskaraNegativo = (-b - sqrt(delta))/(2*a);
    
    if(delta > 0){
        printf("As raises do seu calculo sao: %f e %f", baskaraPositivo, baskaraNegativo);
    }else if(delta < 0){
        printf("O seu calculo não tem raizes pois delta é menor que  0");
    }else if (delta = 0 ){
        printf("O seu calculo tem apenas uma raiz");
    }
    
    
    return 0;
}