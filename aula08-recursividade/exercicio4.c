#include <stdio.h>

int maior(int v[], int n)
{
    if (n == 1)
        return v[0];

    int anterior = maior(v, n - 1);

    if (v[n - 1] > anterior)
    {
        printf("anterior --> %d | v[n-1] --> %d\n", anterior, v[n - 1]);
        return v[n - 1];
    }

    printf("anterior --> %d | v[n-1] --> %d\n", anterior, v[n - 1]);
    return anterior;
}

int main()
{
    int v[] = {10, 70, 20, 30, 85, 40, 50};
    int n = sizeof(v) / sizeof(v[0]);

    printf("%d\n", maior(v, n));

    return 0;
}
