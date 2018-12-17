/*
Utiliza bucles anidados para imprimir las tablas de multiplicar de los números del 1 al 9.

Esta sería la salida del programa:

La tabla del 1 es:
1 por 1 es 1
1 por 2 es 2
1 por 3 es 3
1 por 4 es 4
1 por 5 es 5
1 por 6 es 6
1 por 7 es 7
1 por 8 es 8
1 por 9 es 9
1 por 10 es 10

[Resto de tablas...]

La tabla del 9 es:
9 por 1 es 9
9 por 2 es 18
9 por 3 es 27
9 por 4 es 36
9 por 5 es 45
9 por 6 es 54
9 por 7 es 63
9 por 8 es 72
9 por 9 es 81
9 por 10 es 90
*/

#include <stdio.h>

#define MAXI 9
#define MAXJ 10

int main() {

    int i, j;

    for (i=1; i <= MAXI; i++){

        printf("La tabla del %d es:\n", i);

        for (j=1; j <= MAXJ; j++)
            printf("%d por %d es %d\n", i, j, i * j);

        printf("\n");
    }

    return 0;
}
