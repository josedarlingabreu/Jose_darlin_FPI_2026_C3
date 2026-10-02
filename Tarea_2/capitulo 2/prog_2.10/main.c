#include <stdio.h>

int main(void)
{
    int NUM;

    printf("Ingrese un numero entero: ");
    scanf("%d", &NUM);

    if (NUM == 0)
    {
        printf("\nEl numero es Nulo (Cero)\n");
    }
    else if (NUM % 2 == 0)
    {
        printf("\nEl numero es Par\n");
    }
    else
    {
        printf("\nEl numero es Impar\n");
    }

    return 0;}