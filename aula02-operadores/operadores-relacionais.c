#include<stdio.h>

int main(){
    int x;
    int y;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    printf("Digite um valor para y: ");
    scanf("%d", &y);

    printf("X > Y: %d \n", x > y);
    printf("X == Y: %d \n", x == y);
    printf("X < Y: %d \n", x < y);
    return 0;
}