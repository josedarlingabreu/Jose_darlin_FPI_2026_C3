#include <stdio.h>

void f1(void);
int k = 5; /* Variable global */

int main(void)
{
    int i;
    for (i = 1; i <= 3; i++)
    {
        f1();
    }
    return 0;
}

void f1(void)
{
    int k = 2; /* Variable local */
    k++;
    printf("Valor de k local: %d\n", k);
}