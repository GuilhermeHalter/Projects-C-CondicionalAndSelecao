#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou sexo inválido.
*/

int main()
{
    char letra;
    
    printf("Digite uma letra ");
    scanf("%c",&letra);
    
    if(letra == 'm' || letra == 'M'){
        printf("O sexo é Masculino");
    }
    else if(letra == 'f' || letra == 'F'){
        printf("O sexo é Feminino");
    }
    else{
        printf("sexo invalido");
    }

    return 0;
}
