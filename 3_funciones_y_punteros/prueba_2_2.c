/*
Escribe una función con el siguiente prototipo:

int cifras(int num, int * primera, int * ultima);

La función recibe un número entero en la variable num y ha de calcular los 
siguientes valores:

    La primera cifra del número, que guardará en primera.
    La última cifra del número, que guardrá en ultima.
    La cantidad de cifras del número, que retornará al finalizar.

Por ejemplo, para el número 468 la primera cifra es el 4, la última el 8 y la 
cantidad de cifras 3.

NOTA: La función ha de trabajar siempre con el número en formato entero, sin 
considerarlo o convertirlo a caracteres o cadena de caracteres y sin utilizar 
funciones como itoa o sprintf.

Escribe un programa que solicite el número por teclado, llame a la función y 
muestre el resultado obtenido por pantalla. Los mensajes se han de mostrar tal 
y como aparecen en el siguiente ejemplo de ejecución y en el mismo orden 
(variando solo según los números introducidos por el usuario).

Lo que sigue es un ejemplo de ejecución del programa:

Introduce un número entero: 578913
El número 578913 tiene 6 cifras. Su primera cifra es el 5 y su última cifra es 
el 3.

Otro ejemplo:

Introduce un número entero: 75
El número 75 tiene 2 cifras. Su primera cifra es el 7 y su última cifra es el 5.

Otro:

Introduce un número entero: -289
El número -289 tiene 3 cifras. Su primera cifra es el 2 y su última cifra es el 
9.

Y otro:

Introduce un número entero: -4
El número -4 tiene 1 cifras. Su primera cifra es el 4 y su última cifra es el 4.
*/

#include <stdio.h>
#include <math.h>

int cifras(int num, int *primera, int *ultima) {
    int i, resto, dividendo, divisor, cifras=0;
        
    if (num < 0)
        dividendo = -num;
    else if (num > 0)
        dividendo = num;
    else {
        *ultima = 0;
        *primera = 0;
        return 1;
    }

    *ultima = dividendo % 10;

    while (dividendo !=0) {
        *primera = dividendo;
        resto = dividendo % 10;
        dividendo = (dividendo - resto) / 10;
        cifras++;        
    }

    return cifras;

}

int main() {

    int numero, n_cifras, primera, ultima;

    
    printf("Introduce un número: ");
    scanf("%d", &numero);

    n_cifras = cifras(numero, &primera, &ultima);

    printf(
        "El número %d tiene %d cifras. Su primera cifra es el %d y su última "
        "cifra es el %d.\n",
        numero, n_cifras, primera, ultima
    );


    return 0;
}
