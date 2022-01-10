#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int x = 10;

    // Si quisieramos saber la direccion de memoria de x se antepone un "&"
    printf("%x\n", &x);
    int *px = &x; // A los punteros se les asigna la direccion de memoria
    // para optener el valor de px
    printf("Direccion: %d , valor: %d ", &x, x);
    printf("Direccion: %d , valor: %d ", px, *px);

    return 0;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>