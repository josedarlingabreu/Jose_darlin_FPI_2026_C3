#include <stdio.h>

int main(void)
{
    int NUM;

    printf("Ingresa el numero para calcular la serie: ");
    scanf("%d", &NUM);

    if (NUM > 0)
    {
        printf("\nSerie de ULAM\n");
        printf("%d\t", NUM);

        while (NUM != 1)
        {
            if (NUM % 2 == 0)
                NUM = NUM / 2;
            else
                NUM = (NUM * 3) + 1;

            printf("%d\t", NUM);
        }
        printf("\n");
    }
    else
    {
        printf("\nNUM debe ser un entero positivo\n");
    }

    return 0;
}