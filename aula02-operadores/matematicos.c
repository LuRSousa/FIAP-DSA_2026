#include<stdio.h>

int main(){
    float x;
    float y;

    printf("Digite um valor para x: ");
    scanf("%f", &x);

    printf("Digite um valor para y: ");
    scanf("%f", &y);

    printf("O resultado da soma = %.2f \n", x + y);
    printf("O resultado da subtracao = %.2f \n", x - y);
    printf("O resultado da multiplicacao = %.2f \n", x * y);
    printf("O resultado da divisao = %.2f \n", x / y);
    printf("O resto da divisao = %ds \n", (int)x % (int)y);

    return 0;
}