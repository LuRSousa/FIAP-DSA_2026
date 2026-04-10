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

    return 0;
}