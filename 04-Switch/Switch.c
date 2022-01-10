#include <stdio.h>

int main(void)
{
    //Switch con numeros
    int x = 0;
    switch (x)
    {
    //Si x == 0 => entra al caso '0'
    case 0:
        printf("caso 0\n");
        break;
    // este caso ocurre si x=1 o x=2
    case 1:
    case 2:
        //Las llaves sirven para poder definir variables dentro del caso
        {
            printf("Si x vale 1 o vale 2 entra aqui\n");
            break;
        }
    //Si x no es ninguno de los otros entra al caso default
    default:
        printf("default\n");
        break;
    }

    //Switch con caracteres
    x = 'a';
    switch (x)
    {
    //Si x == a => entra al caso 'a'
    case 'a':
        printf("caso 0\n");
        break;
    // este caso ocurre si x=b o x=c
    case 'b':
    case 'c':
        //Las llaves sirven para poder definir variables dentro del caso
        {
            printf("Si x vale b o vale c entra aqui\n");
            break;
        }
    //Si x no es ninguno de los otros entra al caso default
    default:
        printf("default\n");
        break;
    }

    return 0;
}

//Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>