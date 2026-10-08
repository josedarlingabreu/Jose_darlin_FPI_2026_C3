#include <stdio.h>

void contador(void);

int main(void)
{
    int i;
    for (i = 1; i <= 5; i++)
    {
        contador();
    }
    return 0;
}

void contador(void)
{
    static int c = 0;
    c++;
    printf("La funcion se ha llamado %d veces\n", c);
}