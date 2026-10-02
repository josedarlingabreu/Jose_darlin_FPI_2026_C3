#include <stdio.h>

int main(void)
{
    int I = 2, CAM = 1;
    long SSE = 0;

    while (I <= 2500)
    {
        SSE += I;
        printf("%d\t", I);

        if (CAM)
        {
            I += 5;
            CAM = 0;
        }
        else
        {
            I += 3;
            CAM = 1;
        }
    }

    printf("\n\nLa suma de la serie es: %ld\n", SSE);

    return 0;
}