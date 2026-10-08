#include <stdio.h>

int expresion(int q, int T);

int main(void)
{
    int q, T, res;
    printf("Ingrese valores de q y T: ");
    scanf("%d %d", &q, &T);

    res = expresion(q, T);
    printf("Resultado de la expresion: %d\n", res);
    return 0;
}

int expresion(int q, int T)
{
    return (q * q * q) + (T * T) - (12 * q);
}