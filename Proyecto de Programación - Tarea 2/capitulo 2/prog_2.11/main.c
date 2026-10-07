#include <stdio.h>

int main(void)
{
    int DIS, TIE;
    float BIL;

    printf("Ingrese la distancia en km y el tiempo de estancia en dias: ");
    scanf("%d %d", &DIS, &TIE);

    if ((DIS * 2 > 800) && (TIE > 7))
    {
        BIL = DIS * 2 * 0.19 * 0.80;
    }
    else
    {
        BIL = DIS * 2 * 0.19;
    }

    printf("\nEl costo del billete de ida y vuelta es: %7.2f\n", BIL);

    return 0;
}