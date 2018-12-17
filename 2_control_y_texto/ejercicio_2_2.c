/*
Modifica el ejercicio anterior para mejorarlo haciendo que el programa te ayude 
en la búsqueda. Caad vez que introduzcas un número, te indicará si es menor o 
mayor que el que intentas adivinar. Además, para hacerlo un poco más complejo, 
vamos a adivinar en el intervalo 0 - 99.

Este sería un ejemplo de programa:

Teclea la clave: 54










Adivina un número entre 0 y 99: 50
Demasiado pequeño. Prueba otra vez: 75
Demasiado grande. Prueba otra vez: 62
Demasiado grande. Prueba otra vez: 56
Demasiado grande. Prueba otra vez: 53
Demasiado pequeño. Prueba otra vez: 54
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
    
    printf("Adivina un número entre 0 y 99: ");
    scanf("%d", &intento);
    
    while (numero != intento) {
        if (intento < numero) {
            printf("Demasiado pequeño. Prueba otra vez: ");
            scanf("%d", &intento);
        } else {
            printf("Demasiado grande. Prueba otra vez: ");
            scanf("%d", &intento);
        }
    }
    
    printf("¡Número correcto!");
    
    return 0;
}
