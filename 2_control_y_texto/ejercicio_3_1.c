/*
Haz un programa que muestre la tabla de multiplicar de un número (entre 1 y 9) introducido por el usuario.

Esto sería un ejemplo del programa:

Introduce un número entre 1 y 9: 5
La tabla del 5 es:
5 por 1 es 5
5 por 2 es 10
5 por 3 es 15
5 por 4 es 20
5 por 5 es 25
5 por 6 es 30
5 por 7 es 35
5 por 8 es 40
5 por 9 es 45
5 por 10 es 50

Y este, otro:

Introduce un número entre 1 y 9: 9
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

int main() {

    int numero=0;

    do {
        printf("Introduce un número entre 1 y 9: ");
        scanf("%d", &numero);
    } while (numero < 1 | numero > 9);

    printf("La tabla del %d es:\n", numero);

    for (int i=1; i <=9; i++) {
        printf("%d por %d es %d\n", numero, i, numero * i);
    }

    return 0;
}
