#include <stdio.h>

int main(void)
{
    int NIV;
    float SAL;

    printf("Ingrese el nivel del profesor y su salario: ");
    scanf("%d %f", &NIV, &SAL);

    switch (NIV)
    {
        case 1:
            SAL *= 1.0035;
            break;
        case 2:
            SAL *= 1.0041;
            break;
        case 3:
            SAL *= 1.0048;
            break;
        case 4:
            SAL *= 1.0053;
            break;
        default:
            printf("\nNivel invalido\n");
            return 0;
    }

    printf("\nNivel: %d \tNuevo Salario: %8.2f\n", NIV, SAL);

    return 0;
}