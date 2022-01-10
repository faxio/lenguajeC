#include <stdio.h>

int main(void)
{
    // Arreglo de n elementos
    int caja[2];
    caja[0] = 1;
    caja[1] = 10;

    // podemos inicializar los valores desde el principio
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[5] = {[4] = 6}; // asi puedo definir en que posicion espeficica quiero definir.

    // Para saber el tamaño de un arreglo
    int tamaño = sizeof(b) / sizeof(int); // sizeof b = 5*4 -> el 4 por el tamño de bits de un entero por eso es necesario dividirlo en sizeof(int)

    return 0;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>