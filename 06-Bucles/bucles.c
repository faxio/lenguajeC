#include <stdio.h>

int main(void)
{

    // While se ejecuta hasta que la condicion deje de ser verdadera
    int num = 0;
    while (num < 5)
    {
        continue; // sirve para saltarse una repetición
        printf("hola: ");
        num++;
    }

    // do while -> lo mismo que while solo que por obligacion se ejecuta una vez
    num = 0;
    do
    {
        printf("hola");
        num++;
    } while (num < 5);

    // bucle for
    for (int i = 0; i < 5; i++)
    {
        printf("Es lo mismo pero todas las condiciones van dentro del for\n");
        break; // Todos los bucles pueden romperse con esta linea
    }

// Existen otras cosas que podrian llamarse bucles "goto", esto salta del hola3 al hola 1 y asi hasta el infinito
hola:
    printf("hola1\n");
    goto hola3;
hola3:
    printf("Hola3\n");
    goto hola;

    return 0;
}