#include <stdio.h>

int main(void)
{
    // Para hacer una sumatoria usamos la formula de sumatoria.
    int limite = 100;
    int resultado = limite * (limite + 1) / 2;
    printf("Resultado: %d\n", resultado);

    // Si se quisiese hacer una sumatoria, el for sirve para eso
    int acumulador = 0;
    for (int i = 1; i <= limite; i++)
    {
        acumulador += i;
    }
    printf("Resultado: %d\n", acumulador);
    return 0;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>