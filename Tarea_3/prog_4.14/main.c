#include <stdio.h>

void rango(float cal);

int r1=0, r2=0, r3=0, r4=0, r5=0;

int main(void)
{
    float cal;
    printf("Ingrese calificacion (-1 para salir): ");
    scanf("%f", &cal);

    while (cal != -1)
    {
        rango(cal);
        printf("Ingrese calificacion (-1 para salir): ");
        scanf("%f", &cal);
    }

    printf("\n0-3.99: %d\n4-5.99: %d\n6-7.99: %d\n8-8.99: %d\n9-10: %d\n", r1, r2, r3, r4, r5);
    return 0;
}

void rango(float cal)
{
    if (cal < 4.0) r1++;
    else if (cal < 6.0) r2++;
    else if (cal < 8.0) r3++;
    else if (cal < 9.0) r4++;
    else r5++;
}