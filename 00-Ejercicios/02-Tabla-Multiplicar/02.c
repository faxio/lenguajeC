#include <stdio.h>

int main(void)
{
    int num = 10;
    for (int i = 1; i < num; i++)
    {
        for (int j = 1; j < num; j++)
        {
            printf("%d x %d = %d    ", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>