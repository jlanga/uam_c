/*
Escribe una función llamada incrementaDia que reciba como argumento una estructura Fecha (como la vista en la explicación del vídeo) y la aumente en un día.

NOTA: Para simplificar, no tengas en cuenta los años bisiestos y considera que todos los meses tienen 30 días.

Este sería un ejemplo del programa:

Introduce un día: 19
Introduce un mes: 09
Introduce un año: 2028
El día siguiente al introducido es: 20/09/2028.

Y otro:

Introduce un día: 31
Introduce un mes: 12
Introduce un año: 2018
El día siguiente al introducido es: 1/1/2019.
*/

#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;


void incrementaDia (Fecha *f) {
    if (f->dia == 30 && f->mes == 12) {
        f->dia = 1;
        f->mes = 1;
        (f->anyo)++;
    } else if( f->dia == 30) {
        f->dia = 1;
        (f->mes)++;
    } else {
        (f->dia)++;
    }
}


int main() {
    
    Fecha f;
    
    printf("Introduce un día: ");
    scanf("%d", &f.dia);
    
    printf("Introduce un mes: ");
    scanf("%d", &f.mes);

    printf("Introduce un año: ");
    scanf("%d", &f.anyo);

    incrementaDia(&f);

    printf(
        "El dia siguiente al introducido es %d/%d/%d.\n",
        f.dia, f.mes, f.anyo
    );
    


}
