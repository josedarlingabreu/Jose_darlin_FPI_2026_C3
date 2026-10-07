#include <stdio.h>

int main(void)
{
    float PRO;

    printf("Ingrese el promedio del alumno: ");
    scanf("%f", &PRO);

    if (PRO >= 6.0)
    {
        printf("\nAprobado\n");
    }
    else
    {
        printf("\nReprobado\n");
    }

    return 0;
}