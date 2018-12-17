/*
Vamos a modificar la prueba 2.2 para utilizar bucles for en vez de
while. Recuerda, el programa lee números enteros del teclado hasta
que se lean 10 números o se introduzca un 0, lo que ocurra antes,
guardando dichos números en una tabla y mostrándolos en orden
inverso al que han sido introducidos.

Este sería un ejemplo de programa:

Introduzca un número entero (0 para terminar): 12
Introduzca un número entero (0 para terminar): -6
Introduzca un número entero (0 para terminar): 3
Introduzca un número entero (0 para terminar): 0
Los números tecleados son: 3 -6 12

Otro ejemplo:

Introduzca un número entero (0 para terminar): 0
No se ha introducido ningún número.

Un tercer ejemplo:

Introduzca un número (0 para terminar): 3
Introduzca un número (0 para terminar): 5
Introduzca un número (0 para terminar): 9
Introduzca un número (0 para terminar): -1
Introduzca un número (0 para terminar): -5
Introduzca un número (0 para terminar): 7
Introduzca un número (0 para terminar): 8
Introduzca un número (0 para terminar): 12
Introduzca un número (0 para terminar): 17
Introduzca un número (0 para terminar): 9
Máximo de números alcanzado. Continuando...
Los números tecleados son: 9 17 12 8 7 -5 -1 9 5 3

*/


#include <stdio.h>

#define MAX 10

int main() {

    int i=0, numero, numeros[MAX], len_numeros=0;

    for (i=0; i < MAX; i++) {
        printf("Introduzca un número (0 para terminar): ");
        scanf("%d", &numero);
        if (numero == 0)
            break;
        numeros[i] = numero;
        len_numeros = len_numeros + 1;
    }

    if (len_numeros == 0){
        printf("No se ha introducido ningún número.\n");
        return 0;
    }

    if (len_numeros == 10)
        printf("Máximo de números alcanzado. Continuando...\n");

    printf("Los números tecleados son: ");
    for (i = 0; i < len_numeros; i++){
        printf("%d ",numeros[len_numeros - i - 1]);
    }

    return 0;
}
