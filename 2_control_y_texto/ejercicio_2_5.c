/*
Vamos a modificar ahora el ejercicio 6.3 para que el programa compruebe que el 
número introducido está comprendido entre 1 y 10. En caso contrario, el programa
informará de que el número introducido no es correcto y volverá a solicitar el 
número tantas veces como sea necesario, hasta que el número sea correcto. 
Utiliza para esto un bucle do-while.

Esto sería un ejemplo del programa:

    ¿Cuántos elementos quieres mostrar por pantalla? Elige un número entre 1 y 
    10: 42
    El número introducido no es correcto, vuelve a intentarlo: -4
    El número introducido no es correcto, vuelve a intentarlo: 4
    2 4 6 8

Y este, otro:

    ¿Cuántos elementos quieres mostrar por pantalla? Elige un número entre 1 y 
    10: 7
    2 4 6 8 10 12 14
*/

#include <stdio.h>

#define DIM 10

int main() {
    
    int numeros[DIM] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20}, i = 0, mostrar;
    
    printf(
        "¿Cuántos elementos quieres mostrar por pantalla? Elige un número "
        "entre 1 y %d: ",
        DIM
    );
    
    do {
        scanf("%d", &mostrar);
        if (mostrar > DIM || mostrar < 0) {
            printf(
                "El número introducido no es correcto, vuelve a intentarlo: "
            );
        }
    } while (mostrar > DIM || mostrar < 0);
    
    do {
        printf("%d ", numeros[i]);
        i++;
    } while(i < mostrar);
    
    return 0;
}
