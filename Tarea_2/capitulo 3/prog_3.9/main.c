#include <stdio.h>

int main(void)
{
    int I, MAT, MAMAT = 0, MEMAT = 0;
    float SUM, PRO, CAL, MAPRO = -1.0, MEPRO = 11.0;

    printf("Ingrese la matricula del primer alumno (0 para terminar): ");
    scanf("%d", &MAT);

    while (MAT != 0)
    {
        SUM = 0;
        for (I = 1; I <= 5; I++)
        {
            printf("\tIngrese la calificacion %d: ", I);
            scanf("%f", &CAL);
            SUM += CAL;
        }

        PRO = SUM / 5;
        printf("\nMatricula: %d \tPromedio: %5.2f\n", MAT, PRO);

        if (PRO > MAPRO)
        {
            MAPRO = PRO;
            MAMAT = MAT;
        }

        if (PRO < MEPRO)
        {
            MEPRO = PRO;
            MEMAT = MAT;
        }

        printf("\nIngrese la matricula del siguiente alumno (0 para terminar): ");
        scanf("%d", &MAT);
    }

    if (MAPRO != -1.0)
    {
        printf("\n\nAlumno con mejor Promedio -> Matricula: %d \tPromedio: %5.2f", MAMAT, MAPRO);
        printf("\nAlumno con peor Promedio  -> Matricula: %d \tPromedio: %5.2f\n", MEMAT, MEPRO);
    }

    return 0;
}