#include <stdio.h>

int mcd_euclides(int a, int b);

int main(void)
{
    int n1, n2;
    printf("Ingrese dos numeros positivos: ");
    scanf("%d %d", &n1, &n2);
    printf("El MCD es: %d\n", mcd_euclides(n1, n2));
    return 0;
}

int mcd_euclides(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}