#include <stdio.h>

int a = 1;
int b = 2;

void funcion1(int *a, int b);

int main(void)
{
    funcion1(&a, b);
    printf("Globales finales -> a: %d, b: %d\n", a, b);
    return 0;
}

void funcion1(int *a, int b)
{
    *a = *a + 10;
    b = b + 10;
}