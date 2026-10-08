#include <stdio.h>

void f1(int *x);

int main(void)
{
    int I = 5;
    printf("Valor original de I: %d\n", I);
    f1(&I);
    printf("Valor modificado de I: %d\n", I);
    return 0;
}

void f1(int *x)
{
    *x = *x * 2;
}