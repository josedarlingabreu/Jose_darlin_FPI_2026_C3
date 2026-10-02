#include <stdio.h>

int main(void)
{
    int I, N;
    long PRI = 0, SEG = 1, SIG;

    printf("Ingrese la cantidad de terminos de Fibonacci: ");
    scanf("%d", &N);

    if (N >= 1) printf("%ld ", PRI);
    if (N >= 2) printf("%ld ", SEG);

    for (I = 3; I <= N; I++)
    {
        SIG = PRI + SEG;
        PRI = SEG;
        SEG = SIG;
        printf("%ld ", SIG);
    }
    printf("\n");

    return 0;
}