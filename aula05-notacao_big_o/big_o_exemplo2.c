#include <stdio.h>

int somaMatriz(int matriz[][3], int n)
{
    int soma = 0; // Definição de variável = O(1)

    // Definição de variável = O(1)
    // Comparação de termos repetida = O(n)
    // Operação simples repetida = O(n)
    for (int i = 0; i < n; i++)
    { // for completo = O(2n + 1)
        // Definição de variável = O(1)
        // Comparação de termos repetida = O(n)
        // Operação simples repetida = O(n)
        for (int j = 0; j < n; j++)
        {                         // for completo = O(2n + 1)
            soma += matriz[i][j]; // Operação simples = O(1)
        }
    } // for em cadeado = for * for -> O(2n + 1) * O(2n + 2)

    return soma; // Return = O(1)

    // g(n) = 1 + (2n + 1) * (2n + 2) + 1
    // g(n) = 1 + 4n^2 + 4n + 2n + 2 + 1
    // g(n) = 4n^2 + 6n + 4 -> 2(n^2 + 3n + 2)
    // g(n) = n^2 + 3n + 2
    // c = 2
    // T(n) >= 2(n^2 + 3n + 2)
    // O(n^2)
}

int main(void)
{
    // Definição de matriz = fixo -> O(9) cada elemento é uma variável então soma
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    // Função calculada anteriormente = 4n^2 + 6n + 4
    // + 3 pelo parâmetro passado
    int resultado = somaMatriz(matriz, 3); // Definição de variável = fixo -> O(1)

    printf("Soma = %d\n", resultado); // Print = fixo -> O(1)

    return 0; // Return = O(1)

    // g(n) = 9 + 4n^2 + 6n + 4 + 1 + 1 + 1 + 3
    // g(n) = 4n^2 + 6n + 19
    // c = 1
    // T(n) >= 4n^2 + 6n + 19
    // O(n^2)
}