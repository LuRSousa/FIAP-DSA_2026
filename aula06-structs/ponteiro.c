#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct
{
    int rm;
    char nome[50];
    float media;
} Aluno;

void atualizarNota(Aluno aluno, float valor)
{
    if (valor >= 0 && valor <= 10)
    {
        aluno.media = valor;
    }
    else
    {
        printf("Nota inválida!\n");
    }
}

void atualizarNotaPtr(Aluno *aluno, float valor)
{
    if (valor >= 0 && valor <= 10)
    {
        aluno->media = valor;
    }
    else
    {
        printf("Nota inválida!\n");
    }
}

int main()
{
    Aluno aluno1 = {123, "Lucas", 8.9};
    // aluno1.rm = 234; //Acessada indiretamente via variável
    // printf("%d", aluno1.rm);

    Aluno *ptr = &aluno1;

    printf("%p\n", &ptr->rm);
    printf("%p\n", &ptr->nome);
    printf("%p\n", &ptr->media);
    printf("\n");

    ptr->rm = 234;
    printf("%d\n", ptr->rm);  // printando valor do ponteiro
    printf("%p\n", &ptr->rm); // printando endereço de memória do ponteiro
    printf("\n");

    // Tentando atualizar sem ponteiro (valor não muda)
    printf("A nota atual é: %.1f\n", aluno1.media);
    atualizarNota(aluno1, 6.5);
    printf("A nota atualizada é: %.1f\n", aluno1.media);
    printf("\n");

    // Atualizando com ponteiro
    printf("A nota atual é: %.1f\n", ptr->media);
    atualizarNotaPtr(ptr, 6.5);
    printf("A nota atualizada é: %.1f\n", ptr->media);

    return 0;
}