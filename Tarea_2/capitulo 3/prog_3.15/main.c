#include <stdio.h>

int main(void)
{
    int TIPO, DUR;
    float COS = 0.0;

    printf("Ingrese el tipo de llamada (1-Internacional, 2-Nacional, 3-Local) y la duracion en minutos: ");
    scanf("%d %d", &TIPO, &DUR);

    while (TIPO != 0)
    {
        switch (TIPO)
        {
            case 1:
                if (DUR <= 3) COS = 7.59;
                else COS = 7.59 + (DUR - 3) * 3.03;
                break;
            case 2:
                if (DUR <= 3) COS = 1.20;
                else COS = 1.20 + (DUR - 3) * 0.48;
                break;
            case 3:
                COS = 0.0;
                break;
            default:
                printf("\nTipo de llamada no valido\n");
                break;
        }

        printf("\nCosto de la llamada: %6.2f\n", COS);

        printf("\nIngrese el siguiente tipo de llamada (0 para salir): ");
        scanf("%d", &TIPO);
        if (TIPO != 0)
        {
            printf("Ingrese la duracion en minutos: ");
            scanf("%d", &DUR);
        }
    }

    return 0;
}