#include <stdio.h>

int main(void)
{
    int TRA, DIA, EDAD;
    float COS;

    printf("Ingrese Tratamiento (1-4), Dias y Edad: ");
    scanf("%d %d %d", &TRA, &DIA, &EDAD);

    switch (TRA)
    {
        case 1: COS = DIA * 2800.0; break;
        case 2: COS = DIA * 1950.0; break;
        case 3: COS = DIA * 2500.0; break;
        case 4: COS = DIA * 1150.0; break;
        default: COS = -1; break;
    }

    if (COS != -1)
    {
        if (EDAD > 60)
            COS *= 0.75;
        else if (EDAD < 25)
            COS *= 0.85;

        printf("\nCosto total del tratamiento: %8.2f\n", COS);
    }
    else
    {
        printf("\nTipo de tratamiento invalido\n");
    }

    return 0;
}