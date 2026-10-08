#include <stdio.h>

int cubo(int n);

int main(void)
{
    int num, res;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);
    res = cubo(num);
    printf("El cubo de %d es: %d\n", num, res);
    return 0;
}

int cubo(int n)
{
    return n * n * n;
}