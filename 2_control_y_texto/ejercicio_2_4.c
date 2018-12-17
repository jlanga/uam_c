/*
Vamos a modificar el juego del ejercicio 6.2 para que utilice un bucle do-while,
en lugar de un bucle while.

La salida del programa seguirá siendo la misma:

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

int main() {
    
    int adivinar, numero, i=0;
    
    printf("Teclea la clave: ");
    scanf("%d", &adivinar);
    
    i = 0;
    do {
        printf("\n");
        i++;
    } while (i < 10);
    
    printf("Adivina un número entre 0 y 99: ");
    scanf("%d", &numero);
    
    while (numero != adivinar) {
        if(numero > adivinar)
            printf("Demasiado grande. Prueba otra vez: ");
        else
            printf("Demasiado pequeño. Prueba otra vez: ");
        scanf("%d", &numero);
    }
    
    return 0;
}

