#include <stdio.h>

void mostrarDobros(int n) {

    // O(1)
    // O(n-1)
    // O(n-1)
    for (int i = 1; i < n; i *= 2) {
        printf("%d\n", i); //O(1)
    }

    // k = 2^n
    // n = log(k)2

    //g(n) = 1 + n - 1 + n - 1 + 1
    //g(n) = 2n
}

int main(void) {

    mostrarDobros(32);

    return 0;
}