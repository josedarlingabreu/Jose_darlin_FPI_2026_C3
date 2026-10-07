#include <stdio.h>

int main(void)
{
    float P, S, R;

    printf("Ingrese las tres ventas: ");
    scanf("%f %f %f", &P, &S, &R);

    if (P > S)
    {
        if (P > R)
        {
            if (S > R)
                printf("\nEl orden es: %7.2f %7.2f %7.2f\n", P, S, R);
            else
                printf("\nEl orden es: %7.2f %7.2f %7.2f\n", P, R, S);
        }
        else
        {
            printf("\nEl orden es: %7.2f %7.2f %7.2f\n", R, P, S);
        }
    }
    else
    {
        if (S > R)
        {
            if (P > R)
                printf("\nEl orden es: %7.2f %7.2f %7.2f\n", S, P, R);
            else
                printf("\nEl orden es: %7.2f %7.2f %7.2f\n", S, R, P);
        }
        else
        {
            printf("\nEl orden es: %7.2f %7.2f %7.2f\n", R, S, P);
        }
    }

    return 0;
}