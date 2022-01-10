#include <stdio.h>

int main(void)
{
    int numeros[] = {5, 2, 7, 4, 4};
    int size = sizeof(numeros) / sizeof(int);
    int mayor = numeros[0];
    for (int i = 1; i < size; i++)
    {
        if (mayor < numeros[i])
        {
            mayor = numeros[i];
        }
    }
    printf("El mayor es: %d\n", mayor);

    return 0;
}
