#include <stdio.h>

int main(void)
{
    int N, I;
    float SER = 0.0;

    printf("Ingrese el numero de terminos: ");
    scanf("%d", &N);

    for (I = 1; I <= N; I++)
    {
        if (I % 2 != 0)
            SER += 1.0 / I;
        else
            SER -= 1.0 / I;
    }

    printf("\nEl resultado de la serie es: %6.4f\n", SER);

    return 0;
}