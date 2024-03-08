#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa onde o usuário possa escolher em um menu as seguintes opções de cálculo:
Área Retângulo = base * altura
Área Triângulo = base * altura/2
Área do Círculo = 2 * pi * r * r
Área do quadrado = lado * lado
Área do trapézio = (lmaior + lmenor) * altura/2
Sair
 
*/

int main()
{
    int select;
    
    printf("Escolha uma opcao: \n[ 1 ] – Area Retangulo\n[ 2 ] – Area do Triangulo\n[ 3 ] – Area do Circulo\n[ 4 ] – Area do Quadrado\n[ 5 ] – Area do Trapezio\n[ 6 ] - Sair");
    
    printf("\nDigite o numero da operação que voce quer realizar: ");
    scanf("%i", &select);
    
    if(select == 1){
        float base;
        float altura;
        float calculo;
        
        printf("Digite um valor para base: ");
        scanf("%f", &base);
        printf("Digite um valor para altura: ");
        scanf("%f", &altura);
        
        calculo = base * altura;
        
        printf("O valor da area do quadrado %.1f", calculo);
    }
    if(select == 2){
        float base;
        float altura;
        float calculo;
        
        printf("Digite um valor para base: ");
        scanf("%f", &base);
        printf("Digite um valor para altura: ");
        scanf("%f", &altura);
        
        calculo = (base * altura)/2;
        
        printf("O valor da area do Triangulo %.1f", calculo);
    }
    if(select == 3){
        float raio;
        float calculo;
        float pi;
        
        printf("Digite um valor para o raio do Circulo: ");
        scanf("%f", &raio);
        
        pi = 3.1415;
        
        calculo = pi * raio * raio;
        
        printf("O valor da area do Circulo é de %.2f", calculo);
    }
    if(select == 4){
        float lado;
        float calculo;
        
        printf("Digite um valor para o lado: ");
        scanf("%f", &lado);
        
        calculo = lado * lado;
        printf("O valor da area do quadrado é %.0f", calculo);
    }
    if(select == 5){
        float lmaior;
        float lmenor;
        float altura;
        float calculo;
        
        printf("Digite um valor para o lado: ");
        scanf("%f", &lmaior);
        printf("Digite um valor para o outro lado: ");
        scanf("%f", &lmenor);
        printf("Digite um valor para a altura: ");
        scanf("%f", &altura);
        
        calculo = (lmaior + lmenor) * altura/2;
        
        printf("O valor da Area do Trapezio é %f", calculo);

    }
    
    if(select == 6){
        return 0;
    }
    if(select == 0 || select > 6){
        printf("Numero invalido");
        return 0;
    }
    
    
    return 0;
}