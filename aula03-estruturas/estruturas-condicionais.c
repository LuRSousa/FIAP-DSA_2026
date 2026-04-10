#include<stdio.h>

int main(){
    float nota1 = 6.5;
    float nota2 = 3.8;
    float nota3 = 2.8;

    float media = (nota1 + nota2 + nota3) / 3;

    if(media < 4){
        printf("Reprovado!");
    } else if(media < 6){
        printf("Recuperacao!");
    } else{
        printf("Aprovado!");
    }

    return 0;
}