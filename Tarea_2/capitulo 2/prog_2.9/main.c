#include <stdio.h>
#include <math.h>

int main(void)
{
    int R, T, Q;
    double RES;

    printf("Ingrese los valores de R, T y Q: ");
    scanf("%d %d %d", &R, &T, &Q);

    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

    if (RES < 820)
    {
        printf("\nSatisface la condicion: R = %d, T = %d, Q = %d\n", R, T, Q);
    }

    return 0;
}