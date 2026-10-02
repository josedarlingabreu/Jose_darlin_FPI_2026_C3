#include <stdio.h>

int main(void)
{
    float SUE, NSU;

    printf("Ingrese el sueldo del trabajador: ");
    scanf("%f", &SUE);

    if (SUE < 1000.0)
    {
        NSU = SUE * 1.15;
    }
    else
    {
        NSU = SUE * 1.12;
    }

    printf("\nEl nuevo sueldo es: %8.2f\n", NSU);

    return 0;
}