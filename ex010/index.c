#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado. Inclua verificadores de erro para operadores inválidos e tentativa de divisão por zero. 
O menu será como segue:
[ 1 ] – Adição
[ 2 ] – Subtração
[ 3 ] – Multiplicação
[ 4 ] – Divisão
[ 5 ] – Fim
 
*/

int main()
{
    int select;
    float numberP;
    float numberS;
    
    printf("Escolha uma operação: \n[ 1 ] – Adição\n[ 2 ] – Subtração\n[ 3 ] – Multiplicação\n[ 4 ] – Divisão\n[ 5 ] – Fim");
    
    printf("\nDigite o numero da operação matematica que voce quer realizar: ");
    scanf("%i", &select);
    
    printf("Digite um numero para fazer a conta:");
    scanf("%f", &numberP);
    printf("Digite outro numero para fazer a conta:");
    scanf("%f", &numberS);
    
    if(select == 1){
        float soma;
        soma = numberP + numberS;
        printf("A soma dos numeros informados é %.0f", soma);
    }
    if(select == 2){
        float subtracao;
        subtracao = numberP - numberS;
        printf("A subtração dos numeros informados é %.0f", subtracao);
    }
    if(select == 3){
        float multiplicacao;
        multiplicacao = numberP * numberS;
        printf("A Multiplicacao dos numeros informados é %.0f", multiplicacao);
    }
    if(select == 4){
        if(numberS == 0){
            printf("não é possivel dividir um numero por 0");
            return 0;
        }else{
            float divisao;
            divisao = numberP / numberS;
            printf("A divisão dos numeros é %.2f", divisao);
        }
    }
    if(select == 5){
        return 0;
    }
    if(select > 5){
        printf("Erro numero invalido (Selecione os valores de 1 a 5 para fazer as operacoes matematicas)");
        return 0;
    }
    
    return 0;
}