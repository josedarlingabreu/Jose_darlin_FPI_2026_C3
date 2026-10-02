#include <stdio.h>

int main(void)
{
    float PRE, NPR;

    printf("Ingrese el precio del producto: ");
    scanf("%f", &PRE);

    if (PRE < 1500.0)
    {
        NPR = PRE * 1.11;
        printf("\nNuevo precio: %7.2f\n", NPR);
    }
    else
    {
        printf("\nPrecio final: %7.2f\n", PRE);
    }

    return 0;
}