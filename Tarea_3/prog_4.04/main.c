#include <stdio.h>

int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K = 3;

int main(void)
{
    printf("f1: %d\n", f1());
    printf("f2: %d\n", f2());
    printf("f3: %d\n", f3());
    printf("f4: %d\n", f4());
    return 0;
}

int f1(void) { return K * 2; }
int f2(void) { int K = 5; return K; }
int f3(void) { static int K = 8; K++; return K; }
int f4(void) { return K + 10; }