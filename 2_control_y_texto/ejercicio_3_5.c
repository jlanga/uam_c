/*
Si alguna vez te has preguntado cómo se representan los números decimales en
binario, en este ejercicio vamos a crear un programa que lo lleve a cabo. Pero
no pienses que es tan difícil que se necesita un ordenador, simplemente con
papel y boli podrías calcularlo.

Los pasos que seguimos para calcular un número binario son dividir el número en
base 10 por 2. De dicha operación, utilizamos el cociente como nuevo divisor y
el resto nos lo guardamos, pues formará parte del número binario. Seguimos
dividiendo los cocientes resultante por 2 hasta que obtengamos un 1, siendo el
último resto el correspondiente con el primer número de la cifra binaria.
Puedes consultar un ejemplo en esta página de educalab.

Ahora te toca escribir un programa que lea por teclado un número entero
positivo en base 10 y lo convierta a binario. La conversión se realizará sobre
una tabla de enteros, guardando el número binario en orden inverso pero
mostrándolo en orden correcto.

Como condición para tu programa, es necesario que utilices bucles for cuando
necesites recorrer alguna tabla de tu código.

Esto sería un ejemplo del programa:

Introduce un entero positivo: 5
El número convertido a binario es: 101

Y este, otro:

Introduce un entero positivo: 23
El número convertido a binario es: 10111
*/

#include <stdio.h>
#define MAX 64

int main() {

    int i, numero_decimal=0, digitos_binarios[MAX], dividendo, cociente, resto;
    int len_binario;
    printf("Introduce un entero positivo: ");
    scanf("%d", &numero_decimal);

    dividendo = numero_decimal;

    i = 0;
    while (dividendo != 0) {
        cociente = dividendo / 2;
        resto = dividendo % 2;
        digitos_binarios[i] = resto;
        dividendo = cociente;
        i++;
    }

    len_binario = i;

    printf("El número en binario es: ");
    for(i=0; i < len_binario; i++)
        printf("%d", digitos_binarios[len_binario - i -1]);

    return 0;
}
