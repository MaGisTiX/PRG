#include <stdio.h>

void generuj(int a1, int d, int n)
{
    int num = a1;
    for (int i = 1; i <= n; i++)
{
    printf("%d ", num);
    num = num + d;
}
}

    int an(int a1, int d, int n)
{
    return a1 + (d * (n - 1));
}

int main()
{
    generuj(0, 5, 5);
    return 0;
}