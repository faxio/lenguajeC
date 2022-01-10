#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// void => no tiene nada, es decir hola no retorna ningun valor, y tampoco resive ningun valor
void hola(void);
int aleatorio(int n);
int main(void)
{
    hola();
    int n = aleatorio(10);
    printf("Numero: %d\n", n);
    return 0;
}

void hola(void)
{
    printf("Hola\n");
}
int aleatorio(int n)
{
    // Asegura que el numero siempre sea random
    srand(time(NULL));
    return rand() % n + 1;
}
// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>