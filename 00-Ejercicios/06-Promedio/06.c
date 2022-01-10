#include <stdio.h>

int main(void)
{
    float notas[] = {5.5, 2.3, 7.0, 4.3, 4.5};
    int size = sizeof(notas) / sizeof(float);
    float promedio = 0;
    for (int i = 0; i < size; i++)
    {
        promedio += notas[i];
    }
    printf("Promedio: %f", promedio / size);

    return 0;
}
