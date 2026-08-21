#include <stdio.h>
#include <string.h>

// typedef (unsined int) (uint) -> renomeia o tipo de variavel
typedef unsigned int uint;

typedef struct
{
    char rua[50];
    uint numero;
    char bairro[50];
    char cidade[50];
} Endereco;

// Definição da estrutura
typedef struct
{
    uint rm;
    char nome[50];
    float nota[3];
    Endereco endereco;

    // email, data de nascimento, turma...
} Aluno;

int main()
{
    // Declaração  de uma variável do tipo struct
    Aluno aluno[3];

    aluno[0].rm = 123456;
    strcpy(aluno[0].nome, "Claudio Abreu Aura da Silva");

    // aluno[0].nota = {8.7, 9.1, 3.5};
    aluno[0].nota[0] = 8.7;
    aluno[0].nota[1] = 9.1;
    aluno[0].nota[2] = 3.5;

    float qnt_notas = sizeof(aluno[0].nota) / sizeof(aluno[0].nota[0]);
    float soma_notas;

    for (int i = 0; i < qnt_notas; i++)
    {
        soma_notas += aluno[0].nota[i];
    }

    float media = soma_notas / qnt_notas;

    strcpy(aluno[0].endereco.rua, "Av. Paulista");
    aluno[0].endereco.numero = 67;
    strcpy(aluno[0].endereco.bairro, "Bela Vista");
    strcpy(aluno[0].endereco.cidade, "São Paulo");

    printf("RM: %i\n", aluno[0].rm);
    printf("Nome: %s\n", aluno[0].nome);
    printf("Media: %.1f\n", media);
    printf("Endereço: %s %i, %s - %s", aluno[0].endereco.rua, aluno[0].endereco.numero, aluno[0].endereco.bairro, aluno[0].endereco.cidade);

    return 0;
}