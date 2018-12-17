/*
Vamos a escribir un programa bucles while y/o do-while, según consideres. Este programa tiene que solicite al usuario cuántos números quiere leer por teclado (entre 2 y 10), leerlos y mostrar aquellos que sean menores al último introducido.

Recuerda comprobar que el valor introducido por el usuario es correcto.

Esto sería un ejemplo del programa:

¿Cuántos números quieres comparar? Elige un número entre 2 y 10: 11
El número introducido no es correcto, vuelve a intentarlo: 4
Introduce el número 1 de 4: 3
Introduce el número 2 de 4: 7
Introduce el número 3 de 4: 5
Introduce el número 4 de 4: 6
El número 5.00 es menor que el número 6.00
El número 3.00 es menor que el número 6.00

Y este, otro:

¿Cuántos números quieres comparar? Elige un número entre 2 y 10: 5
Introduce el número 1 de 5: 5
Introduce el número 2 de 5: 4
Introduce el número 3 de 5: 3
Introduce el número 4 de 5: 2
Introduce el número 5 de 5: 1
*/

#include <stdio.h>

#define DIM 10

int main() {
    
    int numeros_a_leer, i=0, tabla[DIM];
    
    printf("¿Cuántos números quieres comparar? Elige un número entre 2 y 10: ");
    
    do {
        scanf("%d", &numeros_a_leer);
        if (numeros_a_leer < 2 || numeros_a_leer > DIM)
            printf(
                "El número introducido no es correcto, vuelve a intentarlo: "
            );
            
    } while (numeros_a_leer < 2 || numeros_a_leer > DIM);
    
    i=0;
    do {
        printf("Introduce el número %d de %d: ", i+1, numeros_a_leer);
        scanf("%d", &tabla[i]);
        //printf(tabla[i]);
        i++;
    } while(i < numeros_a_leer);
    
    i = numeros_a_leer - 1; 
    do {
        if (tabla[i] < tabla[numeros_a_leer-1])
            printf(
                "El número %.2lf es menor que el número %.2lf\n", 
                (double) tabla[i], (double) tabla[numeros_a_leer-1]
            );
        i--;
    } while (i >= 0);
    
    return 0;
}
