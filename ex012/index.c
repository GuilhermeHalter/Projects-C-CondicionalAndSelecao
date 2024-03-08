#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que pergunte em que turno você estuda.
Peça para digitar M-matutino ou V-Vespertino ou N-Noturno.
Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inválido!, conforme o caso.

*/

int main()
{
    
    char letra;
    printf("Informe em que perido do dia voce estuda(Digite só a letra inicial do periodo)\nM - matutino\nV - Vespertino\nN - Noturno.\n");
    scanf("%c", &letra);
    
    if(letra == 'M' || letra == 'm'){
        printf("Bom Dia");
    }else if(letra == 'V' || letra == 'v'){
        printf("Boa Tarde");
    }else if(letra == 'N' || letra == 'n'){
        printf("Boa Noite");
    }else{
        printf("letra Invalida");
    }
    
    return 0;
}