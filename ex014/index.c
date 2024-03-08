#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que tendo como dados de entrada o preço de custo
de um produto e um código de origem, emita o preço junto de sua 
procedência. Caso o código não seja nenhum dos especificados,
o produto deve ser classificado como importado. Código de origem:
1 - Sul, 2 - Norte 3 - Leste, 4 - Oeste, 5 ou 6 - nordeste 7 ou 8 Centro-oeste.

*/

int main()
{
    
    float price;
    int select;
    
    printf("Informe o preço do Produto: ");
    scanf("%f", &price);
    
    printf("Código de origem:\n1 - Sul\n2 - Norte\n3 - Leste\n4 - Oeste\n5 ou 6 - nordeste\n7 ou 8 Centro-oeste\n");
    
    printf("\nDigite um numero referente ao Codigo de origem: ");
    scanf("%i",&select);
    
    if(select == 1){
        printf("Preco do produto %.2f\n", price);
        printf("Codigo de origem: 1 - Sul");
    }else if(select == 2){
        printf("Preco do produto %.2f\n", price);
        printf("Codigo de origem: 2 - Norte");
    }else if(select == 3){
        printf("Preco do produto %.2f\n", price);
        printf("Codigo de origem: 3 - Leste");
    }else if(select == 4){
        printf("Preco do produto %.2f\n", price);
        printf("Codigo de origem: 4 - Oeste");
    }else if(select == 5 || select == 6){
        printf("Preco do produto %.2f\n", price);
        printf("Codigo de origem: 5/6 - Nordeste");
    }else if(select == 7 || select == 8){
        printf("Preco do produto %.2f\n", price);
        printf("Codigo de origem: 7/8 - Centro-oeste");
    }else{
        printf("Preco do produto %.2f\n", price);
        printf("Codigo de origem: Produto Importado"); 
    }
    
    return 0;
}