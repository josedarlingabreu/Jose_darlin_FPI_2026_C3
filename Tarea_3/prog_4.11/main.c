#include <stdio.h>

int mcd(int a, int b);

int main(void)
{
    int n1, n2;
    printf("Ingrese dos numeros enteros: ");
    scanf("%d %d", &n1, &n2);
    printf("El M.C.D. de %d y %d es: %d\n", n1, n2, mcd(n1, n2));
    return 0;
}

int mcd(int a, int b)
{
    int i, m = 1;
    for (i = 1; (i <= a) && (i <= b); i++)
    {
        if (a % i == 0 && b % i == 0)
            m = i;
    }
    return m;
}