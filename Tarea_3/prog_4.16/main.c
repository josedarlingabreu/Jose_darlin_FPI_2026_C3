#include <stdio.h>

void eval_temp(float t, float *max, float *min, float *sum);

int main(void)
{
    int i;
    float temp, max = -100.0, min = 100.0, sum = 0.0;

    for (i = 1; i <= 24; i++)
    {
        printf("Ingrese temperatura de la hora %d: ", i);
        scanf("%f", &temp);
        eval_temp(temp, &max, &min, &sum);
    }

    printf("\nTemperatura Maxima: %.2f\nTemperatura Minima: %.2f\nPromedio: %.2f\n", max, min, sum / 24.0);
    return 0;
}

void eval_temp(float t, float *max, float *min, float *sum)
{
    if (t > *max) *max = t;
    if (t < *min) *min = t;
    *sum += t;
}