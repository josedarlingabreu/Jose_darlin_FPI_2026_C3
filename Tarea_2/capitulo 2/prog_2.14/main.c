#include <stdio.h>

int main(void)
{
    int CLA, TIE;
    float COS;

    printf("Ingrese la clave de la zona y el tiempo en minutos: ");
    scanf("%d %d", &CLA, &TIE);

    switch (CLA)
    {
        case 12: COS = TIE * 2.0; break;
        case 15: COS = TIE * 2.2; break;
        case 18: COS = TIE * 4.5; break;
        case 19: COS = TIE * 3.5; break;
        case 23:
        case 25: COS = TIE * 6.0; break;
        case 29: COS = TIE * 5.0; break;
        default: COS = -1; break;
    }

    if (COS != -1)
    {
        printf("\nClave: %d\tTiempo: %d min\tCosto: %6.2f\n", CLA, TIE, COS);
    }
    else
    {
        printf("\nClave invalida\n");
    }

    return 0;
}