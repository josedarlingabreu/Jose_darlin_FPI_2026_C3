#include <stdio.h>

int cubo(int n);

int main(void)
{
    int I = 2, C;
    C = cubo(I);
    printf("El cubo de %d es %d\n", I, C);
    return 0;
}

int cubo(int n)
{
    return n * n * n;
}