#include <stdio.h>

int maiorElemento(int v[], int n)
{
    int maior = v[0]; // Definição de variável = fixo -> O(1)

    // Definição de variável = fixo -> O(1)
    // Comparação de termos repetida = variável -> O(n-1) nesse caso pois o for inicia na posição 1 e não zero
    // Operação repetida = variável -> O(n-1) segue a comparação
    for (int i = 1; i < n; i++)
    {
        if (v[i] > maior)
        {                 // Comparação de termos = variável -> O(n-1) segue a comparação inicial
            maior = v[i]; // Definição de variável = fixo -> O(1)
        }
    }

    return maior; // Return = fixo -> O(1)

    // g(n) = O(1) + O(1) + O(n-1) + O(n-1) + O(n-1) + O(1) + O(1)
    // g(n) = 1 + 1 + n - 1 + n - 1 + n - 1 + 1 + 1
    // g(n) = 3n + 1
}

int main(void)
{
    int vetor[] = {10, 25, 8, 40, 32, 70, 15}; // Definição de vetor = fixo -> O(7) cada elemento é uma variável então soma

    int n = sizeof(vetor) / sizeof(vetor[0]); // Operação simples = simples -> O(1)

    // Função calculada anteriormente = 3n + 1
    int maior = maiorElemento(vetor, n); // Definição de variável = fixo -> O(1)

    printf("Maior elemento: %d\n", maior); // Print = fixo -> O(1)

    return 0; // Return = fixo -> O(1)

    // g(n) = O(7) + O(1) + O(3n+1) + O(1) + O(1) + O(1)
    // g(n) = 7 + 1 + 3n + 1 + 1 + 1 + 1
    // g(n) = 3n + 12
    // g(n) = 3(n + 4)
    // g(n) = n + 4 -> c = 3
    // limite superior (T(n)) >= c * g(n)
    // T(n) = 3(n + 4)
    // complexidade geral O(n) = n -> elimina as constantes
}