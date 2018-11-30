/*
Escribe un programa que implemente el siguiente juego: solicitará un número entero entre 0 y 9, que deberás teclear sin mirar. Despuésm el número desaparecerá de la pantalla (imprimiendo 10 saltos de línea, por ejemplo), y después de preguntará por el número hasta que lo aciertes.

Este sería un ejemplo de programa:

Teclea la clave: 4










Adivina un número entre 0 y 9: 0
Ese no es el número. Prueba otra vez: 1
Ese no es el número. Prueba otra vez: 2
Ese no es el número. Prueba otra vez: 3
Ese no es el número. Prueba otra vez: 4
¡Número correcto!

*/

#include <stdio.h>

#define MAX 10

int main() {
    
    int numero, intento;
    int i=0;
    
    printf("Teclea la clave: ");
    scanf("%d", &numero);
    
    while (i < 10) {
        printf("\n");
        i++;
    }
    
    printf("Adivina un número entre 0 y 9: ");
    scanf("%d", &intento);
    
    while (numero != intento) {
        printf("Ese no es el número. Prueba otra vez: ");
        scanf("%d", &intento);
    }
    
    printf("¡Número correcto!");
    
    return 0;
}
