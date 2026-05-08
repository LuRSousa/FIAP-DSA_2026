#include<stdio.h>

int main(){
    int qnt_notas;
    float soma_notas;
    
    printf("Digite o numero de notas que serao calculadas: ");
    scanf("%d", &qnt_notas);
    
    float notas[qnt_notas];

    for(int i = 0; i < qnt_notas; i++){
        printf("Digite a nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    int tamanho_notas = sizeof(notas) / sizeof(notas[0]);

    for(int i = 0; i < tamanho_notas; i++){
        printf("Nota %.d: %.1f\n", i+1, notas[i]);

        soma_notas += notas[i];
    }

    printf("A media das %.d notas e: %.2f", tamanho_notas, soma_notas / tamanho_notas);

    return 0;
}