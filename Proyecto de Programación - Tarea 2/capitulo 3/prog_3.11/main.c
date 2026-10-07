#include <stdio.h>

int main(void)
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
    float CAL;

    printf("Ingrese la calificacion (0 a 10, -1 para salir): ");
    scanf("%f", &CAL);

    while (CAL != -1)
    {
        if (CAL >= 0.0 && CAL < 4.0)
            R1++;
        else if (CAL < 6.0)
            R2++;
        else if (CAL < 8.0)
            R3++;
        else if (CAL < 9.0)
            R4++;
        else if (CAL <= 10.0)
            R5++;

        printf("Ingrese la calificacion (-1 para salir): ");
        scanf("%f", &CAL);
    }

    printf("\nRango 0 - 3.99 : %d", R1);
    printf("\nRango 4 - 5.99 : %d", R2);
    printf("\nRango 6 - 7.99 : %d", R3);
    printf("\nRango 8 - 8.99 : %d", R4);
    printf("\nRango 9 - 10   : %d\n", R5);

    return 0;
}