#include <stdio.h>

int main(void)
{
    // Hasta el numero primo que queremos obtener.
    int primo = 30;
    int primos[30];

    // Cremoas un contador para guardar los numeros primos ordenadamente
    // Es mas fácil sabes cuando un número no es primo por eso se utilza la variable validación.
    int validacion = 0, cont = 0;
    // Para saber si un numero es primo debemos recorrer todos los posibles numeros
    for (int i = 2; i <= primo; i++)
    {
        for (int j = 2; j <= primo; j++)
        {
            // i != de j porque la idea es encontrar divisores que sean distintos a ellos.
            if (i != j && i % j == 0)
                validacion = 1;
        }
        if (validacion != 1)
        {
            primos[cont] = i;
            cont++;
        }
        validacion = 0;
    }
    for (int i = 0; i < cont; i++)
    {
        printf("primos: %d\n", primos[i]);
    }

    return 0;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>