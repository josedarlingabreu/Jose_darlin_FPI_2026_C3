#include <stdio.h>
#include <math.h>

int main(void)
{
    int OP;
    float T, RES;

    printf("Ingrese la opcion y el valor de T: ");
    scanf("%d %f", &OP, &T);

    switch (OP)
    {
        case 1:
            RES = T / 5.0;
            break;
        case 2:
            RES = pow(T, T);
            break;
        case 3:
        case 4:
            RES = 6.0 * T / 2.0;
            break;
        default:
            RES = 1.0;
            break;
    }

    printf("\nResultado: %7.2f\n", RES);

    return 0;
}