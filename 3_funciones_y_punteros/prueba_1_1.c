/*
Codifica una función de tipo entero llamada diferencia() que reciba dos 
argumentos de tipo char y compruebe que están entre la A y la Z o entre la a y 
la z.

La función ha de devolver la diferencia en caracteres que hay entre las dos 
letras, sin tener en cuenta minúsculas y mayúsculas y siempre retornando un 
número positivo. Si no lo están devolverá -1. Por ejemplo:

    Para los caracteres & y a devolverá -1.
    Para los caracteres a y b devolverá 1.
    Para los caracteres A y b devolverá 1.
    Para los caracteres b y a devolverá 1.
    Para los caracteres D y b devolverá 2.

Escribe un programa principal que solicite dos caracteres y llame a la función 
diferencia. Dependiendo del retorno de la función podrá mostrar tres mensajes 
posibles:

    Un mensaje de error informando de que alguno de los caracteres introducidos 
        no es una letra.
    Un mensaje informando de que la diferencia entre ambas letras es de un 
        carácter.
    Un mensaje informando de que la diferencia entre ambas letras es de x 
        caracteres (para x>1).

Si se ha mostrado el mensaje de error, el programa debe volver a solicitar las 
letras, llamar a la función y mostrar el mensaje hasta que se introduzcan 
valores válidos.

Lo que sigue es un ejemplo de ejecución del programa:

    Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): d
    Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): +
    Error, solo puedes introducir letras del abecedario.
    Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): -
    Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): R
    Error, solo puedes introducir letras del abecedario.
    Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): F
    Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): s
    La diferencia entre la F y la s es de 13 caracteres.

Esto es otro ejemplo:

    Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): t
    Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): m
    La diferencia entre la t y la m es de 7 caracteres.

Otro:

    Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): T
    Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): m
    La diferencia entre la T y la m es de 7 caracteres.

Otro:

    Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): a
    Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): A
    La diferencia entre la a y la A es de 0 caracteres.

Y otro:

    Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): c
    Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): D
    La diferencia entre la c y la D es de un carácter.

NOTA1: Fíjate que este último mensaje es diferente a los anteriores, al haber 
solo un carácter de diferencia.

NOTA2: La función no debe solicitar ningún valor por teclado ni mostrar ningún 
mensaje por pantalla.
*/

#include <stdio.h>
#include <math.h>  // abs


int calcular_diferencia(char letra1, char letra2) {
    return abs(tolower(letra1) - tolower(letra2));
}

int esLetra(char letra) {
    if (letra <= 64 | (letra >= 91 & letra <= 96) | letra >= 123)
        return 0;
    return 1;
}

int main() {

    char letra1 = 0, letra2= 0;
    int diferencia;

    do {
        printf("Introduce una letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): ");
        scanf("%c", &letra1);
        printf("Introduce otra letra de del abecedario en mayúsculas o minúsculas (excepto la ñ): ");
        scanf("\n%c", &letra2);
        if (!esLetra(letra1) | !esLetra(letra2)) {
            printf("Error, solo puedes introducir letras del abecedario.\n");
        }
    } while (!esLetra(letra1) | !esLetra(letra2));

    diferencia = calcular_diferencia(letra1, letra2);
    
    if (diferencia == 1)
        printf(
            "La diferencia entre la %c y la %c es de un carácter.\n",
            letra1, letra2
        );
    else
        printf(
            "La diferencia entre la %c y la %c es de %d caracteres.\n",
            letra1, letra2, diferencia
        );
    return 0;
}


