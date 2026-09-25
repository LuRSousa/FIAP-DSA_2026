#include <stdio.h>
#include <stdlib.h> //malloc (memory allocation), realloc

struct Node
{
    int dado;
    struct Node *proximo;
};

void inserirInicio(struct Node **head, int valor)
{
    struct Node *novo = malloc(sizeof(struct Node));
    novo->dado = valor;
    novo->proximo = *head;
    *head = novo;
}

void imprimirLista(struct Node *head)
{
    struct Node *atual = head;

    while (atual != NULL)
    {
        printf("%d -> ", atual->dado);
        atual = atual->proximo;
    }

    printf("NULL\n");
}

struct Node *buscar(struct Node *head, int alvo)
{
    struct Node *atual = head;

    while (atual != NULL)
    {
        if (atual->dado == alvo)
        {
            return atual;
        }

        atual = atual->proximo;
    }

    return NULL;
}

int main()
{
    struct Node *No; // Declaração do nó na lista ligada

    No = (struct Node *)malloc(sizeof(struct Node));

    printf("%d\n", No->dado);

    No->dado = 10;
    No->proximo = NULL;

    printf("%d\n", No->dado);

    if (No == NULL)
    {
        printf("Erro: Memoria Insuficiente!\n");
        exit(1);
    }

    inserirInicio(&No, 5);
    printf("%d\n", No->dado);

    printf("\n");

    imprimirLista(No);

    inserirInicio(&No, 50);
    inserirInicio(&No, 67);
    inserirInicio(&No, 69);
    inserirInicio(&No, 200);

    imprimirLista(No);

    struct Node *novoNo;
    int alvo = 67;
    novoNo = buscar(No, alvo);
    if (novoNo == NULL)
    {
        printf("Erro: Memoria Insuficiente!");
        exit(1);
    }
    printf("O valor %d foi encontrado", novoNo->dado);

    return 1;
};