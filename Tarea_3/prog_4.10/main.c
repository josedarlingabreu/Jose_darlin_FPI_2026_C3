#include <stdio.h>

int es_multiplo(int a, int b);

int main(void)
{
    int num1, num2;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &num1, &num2);

    if (es_multiplo(num1, num2))
        printf("%d es multiplo de %d\n", num2, num1);
    else
        printf("%d NO es multiplo de %d\n", num2, num1);

    return 0;
}

int es_multiplo(int a, int b)
{
    if (b % a == 0)
        return 1;
    else
        return 0;
}