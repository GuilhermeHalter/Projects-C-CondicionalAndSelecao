#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que verifique se uma letra digitada é vogal ou consoante.
*/

int main()
{
    char letra;
    char vogal[5] = {'a','e','i','o','u'};
    char vogalM[5] = {'A','E','I','O','U'};
    
    printf("Informe uma letra ");
    scanf("%c", &letra);
    
    if(letra == vogal[0] || letra == vogal[1] || letra == vogal[2] || letra == vogal[3] || letra == vogal[4] ){
        printf("A letra digitada é uma vogal");
    }else if(letra == vogalM[0] || letra == vogalM[1] || letra == vogalM[2] || letra == vogalM[3] || letra == vogalM[4] ){
        printf("A letra digitada é uma vogal");
    }else{
        printf("A letra digitada é uma consoante");
    }
    

    return 0;
}