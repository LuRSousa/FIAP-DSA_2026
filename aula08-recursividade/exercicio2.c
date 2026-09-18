#include <stdio.h>

int somatorio(int n)
{
    // Caso Base
    if (n == 0)
        return 0;

    // Caso Recursivo
    return n + somatorio(n - 1);
}

int main()
{
    printf("%d\n", somatorio(10));

    return 0;
}
