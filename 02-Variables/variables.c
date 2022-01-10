#include <stdio.h>
#include <stdbool.h> //Incluir los tipos de datos booleanos -> (true, false)
#include <limits.h>  // Contiene los maximos valores de los enteros
#include <float.h>   // Maximos valores de cada real.

#define N 10 // Creamos una constante Llamada n con valor 10

int main(void)
{
    // Para escribir una variable es necesario definir el tipo de ésta

    // Enteros
    int numero = 5;             // Numeros enteros (-2147483648 a +2147483647) -> hasta 32 bits de longitud
    short chico = 1;            // Numeros enteros pequeños (-32768 a 32767) -> 16 bits de longitud
    long largo = 10;            // Numeros enteros grandes (-2147483648 a +2147483647) -> 32 bits de longitud, y algunas veces hasta 64 bits
    long largo2 = 10L;          // L indica que la constante 10 es long
    long long muylargo = 19;    // Numeros enteros muy grandes.  (-9223372036854775808 a +9223372036854775807) -> 64 bits de longitud
    long long muylargo2 = 10ll; // ll indica que el 10 es long long

    // Reales
    long double floatGrande = 10.01L; // Numeros decimal con presicion de 19 digitos. la L indica long double
    double numero2 = 9.8;             // numero decimal con presicion de 16 digitos
    double numero2e = 1.2e+5;         // 1.2*(10**5)
    float numero3 = 9.8f;             // numero decimal con presicion de 8 digitos

    // Caracteres
    char caracter = 'a'; // un caracter, puede ser numerico,, alfabetico, o un caracter especial (\n , \t , \b , \r, etc ).
    char car1 = 97;      // la a es el decimal 97
    char car2 = 0x61;    // l a es el hexadecimal 0061
    char car3 = 0141;    // la a en octal es 0141

    // Imporante saber que se define un caracter extra "\0" el compilador lo coloca para definir que termino el texto
    char texto[11] = "Hola mundo"; // para escribir texto hay que definir el tamaño

    // Existe un %g -> elimina los 0 no significativos 0.245000 -> 0.245
    printf("Numero: %d\n", numero);            // Muestra el valor de numero en la posicion %d, %d se usa para enteros
    printf("numero int float", (float)numero); // convierte el entero a float
    printf("Numero: %lf\n", numero2);          // Muestra el valor de numero en la posicion %lf, %lf se usa para flotantes muy precisos es decir double
    printf("Numero: %f\n", numero3);           // Muestra el valor de numero en la posicion %f, %f se usa para numero decimales.
    printf("Caracter: %c\n", caracter);        // Muestra el valor del caracter en la posicion %c, %c se usa para mostrar caracteres
    printf("Texto: %s\n", texto);              // Muestra el valor del caracter en la posicion %s, %s se usa para mostrar textos

    // Se pueden definir varias variables al mismo tiempo si son del mismo tipo:
    int num1, num2;
    int num3 = 4, num5 = 5;
    num1 = num2 = 1;
    printf("num1: %d, num2: %d, num3: %d, num5: %d", num1, num2, num3, num5);

    // Existen las variables con signo, y sin signo, cuando se usa el unsigned, aumenta el maximos valor positivo, ya que no existe un bit de signo
    signed int conSigno = 2; // Por defecto todos son signed, no es necesario colocar la palabra.
    unsigned int sinSigno = 2;

    // podemos definir nuestros propios tipos
    typedef long long int llint;
    llint muyLargo = 2;

    // Existe enum;
    enum color
    {
        azul,
        green,
        amarillo,
        red
    };
    enum color t_color = red;

    // usando typedef
    typedef enum colores
    {
        azul,
        green,
        amarillo,
        red
    } t_colores;
    t_colores gr = green;

    // tambien puede ser:
    typedef enum
    {
        azul,
        green,
        amarillo,
        red
    } t_col;
    t_col re = red;

    return 0;
}

// Compilacion: gcc <nombre_archivo> -o <nombre_ejecutable>