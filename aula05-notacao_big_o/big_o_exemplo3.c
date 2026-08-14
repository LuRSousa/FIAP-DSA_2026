#include <stdio.h>

void imprimirTriangulo(int n)
{
    // O(1)
    // O(n)
    // O(n)
    for (int i = 0; i < n; i++) // O(2n + 2)
    {
        // O(1)
        // O(n)
        // O(n)
        for (int j = 0; j <= i; j++) // O (2n + 2)
        {
            printf("* "); // O(1)
        }

        printf("\n"); // O(1)
    }

    // g(n) = (2n + 2) * (2n + 2)
    // g(n) = 4n^2 + 4n + 4n + 4
    // g(n) = 4n^2 + 8n + 4
}

int main(void)
{
    imprimirTriangulo(5); // O(4n^2 + 8n + 4) + 5
    return 0;             // O(1)

    // g(n) = 4n^2 + 4n + 4n + 4 + 5
    // g(n) = 4n^2 + 4n + 10
    // g(n) = 2(2n^2 + 2n + 5)
    // c = 2
    // T(n) >= 2(2n^2 + 2n + 5)
    // O(n^2)
}