#include <stdio.h>

long productoria(int n);

int main(void)
{
    int num;
    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &num);

    if (num > 0)
        printf("La productoria de 1 a %d es: %ld\n", num, productoria(num));
    else
        printf("El numero debe ser positivo.\n");

    return 0;
}

long productoria(int n)
{
    int i;
    long prod = 1;
    for (i = 1; i <= n; i++)
        prod *= i;
    return prod;
}