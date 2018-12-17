/*
Vamos a escribir un programa un poco más complejo, que lea del teclado dos 
fechas en forma de día, mes y año separados por espacios en blanco. El programa 
debe mostrar un mensaje indicando cuál de las dos es anterior, o si ambas 
coinciden.

Este sería un ejemplo del programa:

Por favor, introduce la primera fecha: 11 3 1972
Por favor, introduce la segunda fecha: 24 2 1989
La fecha 11/3/1972 es anterior a 24/2/1989

Otro ejemplo:

Por favor, introduce la primera fecha: 12 3 456
Por favor, introduce la segunda fecha: 12 3 456
Las dos fechas son iguales

Y otro:

Por favor, introduce la primera fecha: 3 2 2000
Por favor, introduce la segunda fecha: 1 1 2000
La fecha 1/1/2000 es anterior a 3/2/2000
*/

#include <stdio.h>
#include <string.h>

#define MAX_STR 100

int main () {
    
    int dia1, dia2, mes1, mes2, anno1, anno2;
    
    printf("Por favor, introduce la primera fecha: ");
    scanf("%d", &dia1);
    scanf("%d", &mes1);
    scanf("%d", &anno1);
    
    printf("Por favor, introduce la segunda fecha: ");
    scanf("%d", &dia2);
    scanf("%d", &mes2);
    scanf("%d", &anno2);
    
    if (anno1 < anno2)
        printf("La fecha %d/%d/%d es anterior a %d/%d/%d", 
        dia1, mes1, anno1, dia2, mes2, anno2);
    else if (anno1 > anno2)
        printf("La fecha %d/%d/%d es posterior a %d/%d/%d",
        dia1, mes1, anno1, dia2, mes2, anno2);
    else {
        if (mes1 < mes2)
            printf("La fecha %d/%d/%d es anterior a %d/%d/%d", 
            dia1, mes1, anno1, dia2, mes2, anno2);
        else if (mes1 > mes2)
            printf("La fecha %d/%d/%d es posterior a %d/%d/%d",
            dia1, mes1, anno1, dia2, mes2, anno2);
        else {
            if (dia1 < dia2) 
                printf("La fecha %d/%d/%d es anterior a %d/%d/%d", 
                dia1, mes1, anno1, dia2, mes2, anno2);
            else if (dia1 > dia2)
                printf("La fecha %d/%d/%d es posterior a %d/%d/%d", 
                dia1, mes1, anno1, dia2, mes2, anno2);
            else
                printf("Las fechas son iguales");
        }
    }
    
    
    return 0;
}
