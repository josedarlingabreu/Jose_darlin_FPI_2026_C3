#include <stdio.h>
#include <math.h>

int main(void)
{
    float X, Y;

    printf("Ingrese el valor de X: ");
    scanf("%f", &X);

    if (X < 0 || X > 50)
    {
        Y = 0;
    }
    else if (X <= 11)
    {
        Y = X + 3;
    }
    else if (X <= 33)
    {
        Y = pow(X, 2) - 10;
    }
    else
    {
        Y = pow(X, 3) + pow(X, 2) - 1;
    }

    printf("\nEl resultado de Y es: %8.2f\n", Y);

    return 0;
}