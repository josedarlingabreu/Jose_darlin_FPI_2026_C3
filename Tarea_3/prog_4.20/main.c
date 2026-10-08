#include <stdio.h>

long potencia(int base, int exp);

int main(void)
{
    int b, e;
    printf("Ingrese base y exponente: ");
    scanf("%d %d", &b, &e);

    printf("%d elevado a la %d es: %ld\n", b, e, potencia(b, e));
    return 0;
}

long potencia(int base, int exp)
{
    int i;
    long res = 1;
    for (i = 1; i <= exp; i++)
    {
        res *= base;
    }
    return res;
}