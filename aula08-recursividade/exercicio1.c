#include <stdio.h>

void contagem(int n)
{
    // Caso Base
    if (n == 0)
    {
        printf("Fim!\n");
        return;
    }

    // Caso Recursivo
    contagem(n - 1);
    printf("%d\n", n);
}

int main()
{
    contagem(10);

    return 0;
}
