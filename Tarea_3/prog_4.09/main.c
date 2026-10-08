#include <stdio.h>

int suma(int x, int y) { return x + y; }
int resta(int x, int y) { return x - y; }

int operacion(int (*op)(int, int), int a, int b)
{
    return op(a, b);
}

int main(void)
{
    int a = 8, b = 3;
    printf("Suma: %d\n", operacion(suma, a, b));
    printf("Resta: %d\n", operacion(resta, a, b));
    return 0;
}