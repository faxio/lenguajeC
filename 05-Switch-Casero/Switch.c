#include <stdio.h>

int main(void)
{
    //Es lo mismo que el switch pero con if
    int x = 0;
    if (x == 0)
    {
        printf("caso 0\n");
    } // cuando solo hay una instrucción no es necesario escribir las llaves.
    // tambien existe el ! -> negacion (invierte el valor logico) y existe el 'and' -> solo verdadero cuando ambos lo son.
    else if (x == 1 || x == 2)
    {
        printf("Si x vale 1 o vale 2 entra aqui\n");
    }
    else
    {
        printf("default\n");
    }

    return 0;
}

//Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>