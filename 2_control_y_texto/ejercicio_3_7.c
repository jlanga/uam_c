/*
Vamos a modificarel ejercicio anterior (2.6) para imprimir las tablas de multiplicar de los números del 1 al 9 desde el 1 hasta el número la que corresponda la tabla.

Esta sería la salida del programa:

La tabla del 1 hasta el número 1 es:
1 por 1 es 1

La tabla del 2 hasta el número 2 es:
2 por 1 es 2
2 por 2 es 4

La tabla del 3 hasta el número 3 es:
3 por 1 es 3
3 por 2 es 6
3 por 3 es 9

[Resto de tablas...]

La tabla del 9 hasta el número 9 es:
9 por 1 es 9
9 por 2 es 18
9 por 3 es 27
9 por 4 es 36
9 por 5 es 45
9 por 6 es 54
9 por 7 es 63
9 por 8 es 72
9 por 9 es 81
*/



#include <stdio.h>

#define MAXI 9
#define MAXJ 10

int main() {

    int i, j;

    for (i=1; i <= MAXI; i++){

        printf("La tabla del %d hasta el número %d:\n", i, i);

        for (j=1; j <= i; j++)
            printf("%d por %d es %d\n", i, j, i * j);

        printf("\n");
    }

    return 0;
}
