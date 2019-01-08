/*
Escribe un programa que calcule la media de dos enteros introducidos por teclado y la muestre por pantalla, pero utilizando punteros en vez de variables.

Obligatoriamente tienes que utilizar dos variables enteras y sus correspondientes punteros, así como otra variable de tipo double para la media, y su correspondiente puntero.

Desde el momento de la asignación, únicamente puede trabajarse con punteros.

Recomendación: si crees que te va a resultar difícil trabajar directamente con los punteros, puedes hacer el programa con variables normales y después sustituir según lo que te hemos explicado.

Este sería un ejemplo del programa:

Introduce un número: 4
Introduce otro número: 13
media = 8.50

Y otro:

Introduce un número: 345
Introduce otro número: 76
media = 21.50
*/

#include <stdio.h>

int main() {
    
    int num1, num2, *p1, *p2, media;

    printf("Introduce un número: ");
    scanf("%d", &num1);

    printf("Introduce un segundo número: ");
    scanf("%d", &num2);

    p1 = &num1;
    p2 = &num2;
    
    printf("media = %.2lf\n", (*p1 + *p2) / 2.0);
    

    return 0;
}
