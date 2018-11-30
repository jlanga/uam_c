/*
Escribe un programa que inicialice en la declaración una tabla de enteros de 
tamaño 10 con los valores que quieras. En nuestro ejemplo lo hemos hecho con 
los números pares del 2 al 20.

A continuación, el programa ha de solicitar al usuario que introduzca el número 
de valores que quiere que se muestren por pantalla (del 1 al 10), que se 
mostrarán después por pantalla.

Esto sería un ejemplo del programa:

    ¿Cuántos elementos quieres mostrar por pantalla? Elige un número entre 1 y 
    10: 4
    2 4 6 8

Y este, otro:

    ¿Cuántos elementos quieres mostrar por pantalla? Elige un número entre 1 y 
    10: 7
    2 4 6 8 10 12 14
    
*/

#include <stdio.h>

#define DIM 10

int main() {
    
    int i=0, tabla[DIM] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, numero;
    
    printf("¿Cuántos elementos quieres mostrar por pantalla? Elige un número "
        "entre 1 y 10: "
    );
    scanf("%d", &numero);
    
    while (i < numero) {
        printf("%d ", tabla[i]);
        i++;
    }
    
    return 0;
}
