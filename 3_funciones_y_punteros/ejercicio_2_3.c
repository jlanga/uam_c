/*
Vamos a escribir un programa que calcule la media y la varianza de dos números 
enteros utilizando una función con el siguiente prototipo:

void estadistica (int x, int y, double *pMedia, double *pVar);

En los parámetros pMedia y pVar deberán guardarse los valores que calculemos. 
De esta forma, conseguiremos que una función devuelva dos cálculos, lo cual no 
puede hacerse mediante la instrucción return.

    La fórmula de la media es: (x+y)/2
    La fórmula de la varianza es: ((x-media)*(x-media) + (y-media)*(y-media)) /2

El main ha de solicitar los dos números por teclado y, tras llamar a la 
función, mostrar la media y la varianza por pantalla, pues la función no debe 
tener ningún printf() ni scanf().

Este sería un ejemplo del programa:

Introduce un número: 17
Introduce otro número: 31
Media = 24.00
Varianza = 49.00

Y otro:

Introduce un número: 182
Introduce otro número: 56
Media = 119.00
Varianza = 3969.00
*/

#include <stdio.h>

void estadistica (int x, int y, double *pMedia, double *pVar) {
    
    *pMedia = (x+y)/2.0;
    printf("\n");
    *pVar = ((x - *pMedia) * (x - *pMedia) + (y - *pMedia) * (y - *pMedia)) / 2.0;
}


int main() {
    
    int x, y;
    double media, varianza;

    printf("Introduce un número: ");
    scanf("%d", &x);

    printf("Introduce otro número: ");
    scanf("%d", &y);

    estadistica(x, y, &media, &varianza);

    printf("Media = %.2lf\n", media);
    printf("Varianza = %.2lf\n", varianza);

    return 0;    
}

