#include <stdio.h>

int main(void)
{
    int CLA, I;
    float CAL, SUM, PRO;

    printf("Ingrese la clave del alumno (0 para terminar): ");
    scanf("%d", &CLA);

    while (CLA != 0)
    {
        SUM = 0;
        for (I = 1; I <= 5; I++)
        {
            printf("Ingrese calificacion %d: ", I);
            scanf("%f", &CAL);
            SUM += CAL;
        }

        PRO = SUM / 5.0;
        printf("\nClave: %d \tPromedio: %5.2f\n\n", CLA, PRO);

        printf("Ingrese la clave del siguiente alumno (0 para terminar): ");
        scanf("%d", &CLA);
    }

    return 0;
}