#include <stdio.h>

int main(void)
{
    int limite = 5;
    // Si se quisiese hacer una productoria, el for sirve para eso
    long acumulador = 1;
    for (int i = 1; i <= limite; i++)
    {
        acumulador = acumulador * i;
    }
    printf("Resultado: %ld\n", acumulador);

    return 0;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>