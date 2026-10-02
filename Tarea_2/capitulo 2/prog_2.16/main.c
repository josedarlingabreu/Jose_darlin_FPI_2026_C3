#include <stdio.h>

int main(void)
{
    int CLA, CAT, ANT;
    float SAL;

    printf("Ingrese Clave, Categoria, Antiguedad y Salario: ");
    scanf("%d %d %d %f", &CLA, &CAT, &ANT, &SAL);

    if ((CAT == 3 || CAT == 4) && (ANT >= 5))
    {
        printf("\nEl trabajador con clave %d reúne las condiciones.\n", CLA);
    }
    else if (CAT == 2 && ANT >= 7)
    {
        printf("\nEl trabajador con clave %d reúne las condiciones.\n", CLA);
    }
    else
    {
        printf("\nEl trabajador con clave %d NO reúne las condiciones.\n", CLA);
    }

    return 0;
}