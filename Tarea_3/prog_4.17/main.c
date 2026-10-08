#include <stdio.h>

void mayor_lluvia(float r1, float r2, float r3);

int main(void)
{
    float r1, r2, r3;
    printf("Ingrese lluvias en Region Norte, Centro y Sur: ");
    scanf("%f %f %f", &r1, &r2, &r3);

    mayor_lluvia(r1, r2, r3);
    return 0;
}

void mayor_lluvia(float r1, float r2, float r3)
{
    if (r1 > r2 && r1 > r3)
        printf("La Region Norte tuvo mayor lluvia: %.2f\n", r1);
    else if (r2 > r3)
        printf("La Region Centro tuvo mayor lluvia: %.2f\n", r2);
    else
        printf("La Region Sur tuvo mayor lluvia: %.2f\n", r3);
}