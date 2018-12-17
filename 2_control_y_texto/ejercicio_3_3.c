/*
Escribe un programa que utilice un bucle para leer hasta 10 números enteros del teclado o que pare de solicitar números si se introduce 0 (utiliza la instrucción break para esta situación).

El programa sumará únicamente los números que sean positivos, los negativos no se considerarán para la suma. Antes de terminar el programa mostrará la suma total obtenida, indicando además cuántos números se han leído en total (sin contar el 0) y cuántos de ellos eran negativos.

Esto sería un ejemplo del programa:

Introduce un número: 4
Introduce un número: -2
Introduce un número: 5
Introduce un número: -6
Introduce un número: -11
Introduce un número: 0
Se han leído un total de 5 números, de los cuales 3 eran negativos.
La suma de los 2 valores positivos leídos es: 9.

Y este, otro:

Introduce un número: 10
Introduce un número: -9
Introduce un número: 8
Introduce un número: -7
Introduce un número: 6
Introduce un número: -5
Introduce un número: 4
Introduce un número: -3
Introduce un número: 2
Introduce un número: -1
Se han leído un total de 10 números, de los cuales 5 eran negativos.
La suma de los 5 valores positivos leídos es: 30.
*/

#include <stdio.h>

#define MAX 10

int main() {

    int i=0, n=0, n_positivos=0, suma_positivos=0, numero;



    for (i=0; i < MAX; i++) {
        printf("Introduce un número: ");
        scanf("%d", &numero);

        if (numero == 0)
            break;

        n++;

        if (numero > 0) {
            n_positivos++;
            suma_positivos += numero;
        }
    }

    printf(
        "Se han leído un total de %d números, de los cuales %d "
        "eran negativos.\n", n, n - n_positivos
    );

    printf(
        "La suma de los %d valores positivos leídos es: %d",
        n_positivos, suma_positivos
    );

    return 0;
}
