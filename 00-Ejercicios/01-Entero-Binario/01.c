#include <stdio.h>

int main(void)
{
    // Numero a convertir
    int num = 26;
    // Definimos un arreglo que acumulara los restos
    int ac[1000];
    // Definimos un incrementador para que guarde en las posiciones que le corresponde
    int i = 0;
    // Mientras el número sea mayor a 0 se podra seguir diviendo
    while (num > 0)
    {
        // Necesitamos obtener el resto de la division
        ac[i] = num % 2;
        // Hacemos la division
        num = num / 2;
        // Aumentamos i para guardar la siguiente posicion
        i++;
    }
    // Este for se usa en el sentido contrario para que el resultado sea impreso en el orden correcto
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d ", ac[j]);
    }
    printf("\n");

    return 0;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>