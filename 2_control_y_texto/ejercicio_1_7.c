/*
Escribe un conversor de euros a varias monedas mediante la instrucción switch.
El programa ha de solicitar una cantidad en euros, que será traducida a la 
moneda seleccionada.

A continuación, el programa debe presentar por pantalla un menú como el que 
sigue:

    Selecciona una opción:
    1. Dólar
    2. Yen japonés
    3. Libra esterlina

El usuario podrá introducir 1, 2 o 3 y la opción se leerá como un número entero.

Este sería un ejemplo del programa:

    Introduce una cantidad en euros: 100
    Selecciona una opción:
    1. Dólar
    2. Yen japonés
    3. Libra esterlina
    2
    100.00 euros son 10289.20 yenes.
*/

#include <stdio.h>

int main() {
    
    char opcion;
    int euros;
    
    printf("Introduce una cantidad en euros: ");
    scanf("%d", &euros);
    printf("Selecciona una opción:\n");
    printf("(D)ólar\n");
    printf("(Y)en japonés\n");
    printf("(L)ibra esterlina\n");
    getchar();
    scanf("%c", &opcion);
    
    
    switch (opcion) {
        case 'd':
        case 'D':
            printf(
                "%.2lf euros son %.2lf dólares", 
                (double) euros, 
                (double) euros * 1.6
            );
            break;
        case 'y':
        case 'Y':
            printf(
                "%.2lf euros son %.2lf yenes",
                (double) euros,
                (double) euros * 0.87
            );
            break;
        case 'l':
        case 'L':
            printf(
                "%.2lf euros son %.2lf libras esterlinas",
                (double) euros,
                (double) euros * 0.5
            );
            break;
        default:
            printf(
                "Opción incorrecta"
            );
    }
    
    return 0;
}


