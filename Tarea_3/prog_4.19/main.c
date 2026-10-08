#include <stdio.h>

void funcion_combinada(int a, int *b);

int main(void)
{
    int x = 5, y = 10;
    printf("Antes -> x: %d, y: %d\n", x, y);
    funcion_combinada(x, &y);
    printf("Despues -> x: %d, y: %d\n", x, y);
    return 0;
}

void funcion_combinada(int a, int *b)
{
    a = a + 10;
    *b = *b + 10;
}