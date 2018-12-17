/*
Declara una estructura llamada Fecha que contenga tres miembros de tipo entero: 
dia, mes y anyo.

Utiliza esa estructura en un programa que solicite la fecha de nacimiento de 
dos personas y las guarde en dos variables estructuradas.

El programa ha de comparar las fechas e informar de los siguientes casos:

    Si ambos usuarios han nacido exactamente el mismo día.
    Si ambos usuarios comparten cumpleaños pero han nacido en diferente año, 
        cuántos años se llevan de diferencia.
    Si ambos usuarios no comparten cumpleaños.

Los mensajes se han de mostrar tal y como aparecen en los siguientes ejemplos 
de ejecución y en el mismo orden (variando solo según los datos introducidos por
el usuario).

Lo que sigue es un ejemplo de ejecución del programa:

    Introduce la fecha de nacimiento del primer usuario separada por espacios: 
    17 2 1999
    Introduce la fecha de nacimiento del segundo usuario separada por espacios: 
    17 2 1999
    ¡Felicidades! Ambos habéis nacido el mismo día.

Lo que sigue es otro ejemplo de ejecución del programa:

    Introduce la fecha de nacimiento del primer usuario separada por espacios: 
    17 2 1995
    Introduce la fecha de nacimiento del segundo usuario separada por espacios: 
    17 2 1999
    Ambos cumplís años el mismo día. Os lleváis -4 años de diferencia.

Lo que sigue es otro ejemplo de ejecución del programa:

    Introduce la fecha de nacimiento del primer usuario separada por espacios: 
    17 3 1999
    Introduce la fecha de nacimiento del segundo usuario separada por espacios: 
    17 2 1999
    Vaya, no compartís cumpleaños.
*/

#include <stdio.h>

typedef struct {
    int dia, mes, anno;
} Fecha;

int main () {
 
    Fecha fecha1, fecha2;
    
    printf(
        "Introduce la fecha de nacimiento del primer usuario separada por "
        "espacios: "
    );
    scanf("%d", &fecha1.dia);
    scanf("%d", &fecha1.mes);
    scanf("%d", &fecha1.anno);
    
    printf(
        "Introduce la fecha de nacimiento del primer usuario separada por "
        "espacios: "
    );
    scanf("%d", &fecha2.dia);
    scanf("%d", &fecha2.mes);
    scanf("%d", &fecha2.anno);

    if (fecha1.dia == fecha2.dia && fecha1.mes == fecha2.mes) {
        if(fecha1.anno == fecha2.anno)
            printf("¡Felicidades! Ambos habéis nacido el mismo día.\n");
        else{
            printf(
                "Ambos cumplís años el mismo día. Os lleváis %d años de "
                "diferencia.\n",
                fecha1.anno - fecha2.anno
            );
        }
        
    } else {
        printf("Vaya, no compartís cumpleaños.\n");
    }

    return 0;
}
