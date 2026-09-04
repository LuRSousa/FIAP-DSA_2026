#include <stdio.h>

typedef struct
{
    int id;
    char nome[50];
    float preco;
} Produto;

void aplicarDesconto(Produto *prod, float desconto)
{
    if (desconto >= 0.0 && desconto <= 100.0)
    {
        prod->preco -= prod->preco * desconto / 100;
    }
    else
    {
        printf("Valor de desconto inválido!");
    }
}

int main()
{
    Produto prod = {1, "Teclado", 150.0};
    Produto *ptr = &prod;

    printf("Preço inicial: R$%.2f\n", ptr->preco);
    aplicarDesconto(ptr, 67.0);
    printf("Preço c/ desconto: R$%.2f\n", ptr->preco);

    return 0;
}