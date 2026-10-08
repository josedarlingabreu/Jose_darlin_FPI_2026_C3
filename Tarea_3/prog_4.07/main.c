#include <stdio.h>

int f1(int x, int *y);

int main(void)
{
    int a = 10, b = 20, res;
    res = f1(a, &b);
    printf("a: %d, b modificado: %d, resultado: %d\n", a, b, res);
    return 0;
}

int f1(int x, int *y)
{
    *y = *y + 5;
    return x + *y;
}