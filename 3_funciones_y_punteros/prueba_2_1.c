/*
Escribe una función que calcule el menor y el mayor de los divisores de un 
número. Este sería su prototipo:

int menorMayorDivisor(int num, int *menor, int *mayor);

Los posibles divisores no tendrán en cuenta el 1 ni el propio número. Si el 
número no tiene divisores, tanto en menor como en mayor almacenarán el número 
0. Asimismo, la función ha de devolver 0 si el número recibido es inferior a 2, 
y por lo tanto no se pueden calcular sus divisores. En caso contrario, acabará 
devolviendo 1.

El programa principal solicitará un número y, según los valores obtenidos, 
realizará una de las siguientes operaciones:

    Informe de que el número introducido es incorrecto y vuelva a solicitarlo.
    Informe de que el número no tiene divisores.
    Informe del divisor menor y mayor.

Lo que sigue es un ejemplo de ejecución del programa:

Introduce un número: 1
Error. Debes introducir un número mayor o igual a 2.
Introduce un número: -4
Error. Debes introducir un número mayor o igual a 2.
Introduce un número: 10
El menor divisor de 10 es 2 y su mayor divisor es 5 (sin contar la unidad y él 
mismo).

Otro ejemplo:

Introduce un número: 155
El menor divisor de 155 es 5 y su mayor divisor es 31 (sin contar la unidad y 
él mismo).

Otro:

Introduce un número: 11
El número 11 no tiene divisores menores ni mayores (sin contar la unidad y él 
mismo).

Y otro:

Introduce un número: 9
El menor divisor de 9 es 3 y su mayor divisor es 3 (sin contar la unidad y él 
mismo).
*/


#include <stdio.h>

int menorMayorDivisor(int num, int *menor, int *mayor) {

    int i;
    *menor = 1;
    *mayor = num;

    for (i = 2; i < num; i++) {
        if(num % i == 0) {
            if (*menor == 1)
                *menor = i;
            *mayor = i;
        }
    } 

    if (*menor == 1 && *mayor == num)
        return 0;
    else
        return 1;
}



int main() {

    int numero=0, tiene_divisores, menor, mayor;

    do {
        printf("Introduce un número: ");
        scanf("%d", &numero);
        if (numero <= 1)
            printf("Error. Debes introducir un número mayor o igual a 2.\n");
    } while (numero <= 1);

    tiene_divisores = menorMayorDivisor(numero, &menor, &mayor);

    if (tiene_divisores)
       printf(
            "El menor divisore de %d es %d y su mayor divisor es %d (sin contar la "
            "unidad y él mismo).\n",
            numero, menor, mayor 
        );
    else
        printf(
            "El número %d no tiene divisores menores ni mayores (sin contar la "
            "unidad y él mismo).\n",
            numero
        );
    return 0;
}
