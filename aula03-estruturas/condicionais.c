#include<stdio.h>

int main(){
    printf("Calculadora de Media \n \n");
    
    float nota1, nota2, nota3;
    int presenca;

    /*
        Especificadores Utilizados:
        "%f" -> float
        "%lf" -> double
        "%d" ou "%i" -> int
        "%c" -> char
        "%s" -> string    
    */

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite sua presenca (0 a 100): ");
    scanf("%i", &presenca);

    float media = (nota1 + nota2 + nota3) / 3;

    printf("\nMedia: %.1f e Presenca: %i%%, o aluno esta: ", media, presenca);

    if(media >= 6 && presenca >= 75){
        printf("Aprovado!");
    } else if(presenca < 75){
        printf("Reprovado por falta!");
    } else if(media >= 4){
        printf("Recuperacao!");
    } else{
        printf("Reprovado!");
    }

    return 0;
}