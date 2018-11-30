/*
Escribe un programa que lea números enteros del teclado hasta que se lean 10
números o se introduzca un 0, lo que ocurra antes. El programa guardará dichos
números en una tabla ylos mostrará en orden inverso al que han sido
introducidos.

Para los bucles, emplea solo bucles while y/o do-while.

Esto sería un ejemplo de ejecución:

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

    int numeros[MAX];
    int i = 0;

    while (i < 10) {
        printf("Introduzca un numero (0 para terminar): ");
        scanf("%d", &numeros[i]);


        if (numeros[0] == 0) {
            printf("No se ha introducido ningun numero.\n");
            return 0;
        }

        if (numeros[i] == 0) {
            break;
        }

        if (i == 10) {
            printf("Maximo de numeros alcanzado. Continuando...\n");
            break;
        }
        i++;
    }



    printf("Los numeros tecleados son: ");
    do {
        printf("%d ", numeros[i-1]);
        i--;
    } while(i > 0);

    printf("\n");

    return 0;
}
