#include <stdio.h>

int main(void)
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0;

    printf("Ingrese voto (1-5, 0 para terminar): ");
    scanf("%d", &VOT);

    while (VOT != 0)
    {
        switch (VOT)
        {
            case 1: C1++; break;
            case 2: C2++; break;
            case 3: C3++; break;
            case 4: C4++; break;
            case 5: C5++; break;
            default: NU++; break;
        }
        printf("Ingrese voto (0 para terminar): ");
        scanf("%d", &VOT);
    }

    printf("\nCandidato 1: %d", C1);
    printf("\nCandidato 2: %d", C2);
    printf("\nCandidato 3: %d", C3);
    printf("\nCandidato 4: %d", C4);
    printf("\nCandidato 5: %d", C5);
    printf("\nNulos: %d\n", NU);

    return 0;
}