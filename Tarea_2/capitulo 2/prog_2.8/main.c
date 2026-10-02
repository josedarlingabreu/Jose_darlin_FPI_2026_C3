#include <stdio.h>

int main(void)
{
    int MAT, CAR, SEM;
    float PRO;

    printf("Ingrese Matricula, Carrera, Semestre y Promedio: ");
    scanf("%d %d %d %f", &MAT, &CAR, &SEM, &PRO);

    switch (CAR)
    {
        case 1:
            if (SEM >= 6 && PRO >= 8.5)
                printf("\n%d %d Aceptado\n", MAT, CAR);
            break;
        case 2:
            if (SEM >= 5 && PRO >= 9.0)
                printf("\n%d %d Aceptado\n", MAT, CAR);
            break;
        case 3:
            if (SEM >= 6 && PRO >= 8.8)
                printf("\n%d %d Aceptado\n", MAT, CAR);
            break;
        case 4:
            if (SEM >= 7 && PRO >= 9.0)
                printf("\n%d %d Aceptado\n", MAT, CAR);
            break;
        default:
            printf("\nCarrera no valida\n");
            break;
    }

    return 0;
}