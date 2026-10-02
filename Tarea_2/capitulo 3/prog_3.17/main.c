#include <stdio.h>

int main(void)
{
    int I, J, NUM, SUM, CANT = 0;

    printf("Ingrese un numero entero positivo: ");
    scanf("%d", &NUM);

    for (I = 1; I <= NUM; I++)
    {
        SUM = 0;
        for (J = 1; J <= (I / 2); J++)
        {
            if (I % J == 0)
            {
                SUM += J;
            }
        }

        if (SUM == I)
        {
            printf("%d es un numero perfecto.\n", I);
            CANT++;
        }
    }

    printf("\nTotal de numeros perfectos encontrados entre 1 y %d: %d\n", NUM, CANT);

    return 0;
}