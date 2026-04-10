#include<stdio.h>

int main(){
    /*Estrutura FOR*/
    printf("\n\nEstrutura For:\n");
    int num = 7;

    for(int i = 0; i < 11; i++){
        int tabuada = i * num;

        printf("%i * %i = %i \n", num, i, tabuada);
    }


    /*Estrutura WHILE*/
    printf("\n\nEstrutura While:\n");

    int i = 0;
    int num2 = 9;

    while(i < 11){
        int tabuada = i * num2;

        printf("%i * %i = %i \n", num2, i, tabuada);

        i++;
    }


    /*Estrutura DO WHILE*/
    printf("\n\nEstrutura While:\n");

    int i2 = 0;
    int num3 = 5;

    do{
        int tabuada = i2 * num3;

        printf("%i * %i = %i \n", num3, i2, tabuada);

        i2++;
    } while(i2 < 11); 

    return 0;
}