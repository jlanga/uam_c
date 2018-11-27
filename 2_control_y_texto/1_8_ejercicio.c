/*
Modifica el conversor de moneda con la opción numérica para utilizar una 
enumeración en el switch.

La salida del programa seguirá siendo la misma:

Introduce una cantidad en euros: 100
Selecciona una opción:
1. Dólar
2. Yen japonés
3. Libra esterlina
2
100.00 euros son 10289.20 yenes.
*/

#include <stdio.h>

enum {D=1, Y, L};

int main() {
    
    int opcion;
    int euros;
    
    printf("Introduce una cantidad en euros: ");
    scanf("%d", &euros);
    printf("Selecciona una opción:\n");
    printf("1. Dólar\n");
    printf("2. Yen japonés\n");
    printf("3. Libra esterlina\n");
    getchar();
    scanf("%d", &opcion);
    
    
    switch (opcion) {
        case D:
            printf(
                "%.2lf euros son %.2lf dólares", 
                (double) euros, 
                (double) euros * 1.6
            );
            break;
        case Y:
            printf(
                "%.2lf euros son %.2lf yenes",
                (double) euros,
                (double) euros * 0.87
            );
            break;
        case L:
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


