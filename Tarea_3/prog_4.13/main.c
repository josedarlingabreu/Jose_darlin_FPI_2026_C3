#include <stdio.h>

void par_impar(int num, int *p, int *i);

int main(void)
{
    int n, num, par = 0, impar = 0, j;
    printf("Ingrese la cantidad de numeros: ");
    scanf("%d", &n);

    for (j = 1; j <= n; j++)
    {
        printf("Ingrese numero %d: ", j);
        scanf("%d", &num);
        par_impar(num, &par, &impar);
    }

    printf("Total Pares: %d\nTotal Impares: %d\n", par, impar);
    return 0;
}

void par_impar(int num, int *p, int *i)
{
    if (num % 2 == 0)
        (*p)++;
    else
        (*i)++;
}