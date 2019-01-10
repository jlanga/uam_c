#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    int mes;
    int anyo;
} Fecha;

int main() {

    Fecha *fechas, fecha_antigua;
    int dim, i;

    printf("Introduce la dimensión de la tabla: ");
    scanf("%d", &dim);

    fechas = (Fecha *) malloc(dim * sizeof(Fecha));

    if (fechas == NULL) {
        printf("No se ha podido reservar la memoria.\n");
        return 1;
    }

    for(i=0; i<dim; i++) {

        printf("\n");

        printf("Introduce día de la fecha %d: ", i+1);
        scanf("%d", &fechas[i].dia);

        printf("Introduce mes de la fecha %d: ", i+1);
        scanf("%d", &fechas[i].mes);

        printf("Introduce año de la fecha %d: ", i+1);
        scanf("%d", &fechas[i].anyo);
    }

    fecha_antigua = fechas[0];

    for (i=1; i<dim; i++) {
        if (fechas[i].anyo < fecha_antigua.anyo)
            fecha_antigua = fechas[i];
        else if (
            fechas[i].anyo == fecha_antigua.anyo && 
            fechas[i].mes < fecha_antigua.mes
        )
            fecha_antigua = fechas[i];
        else if (
            fechas[i].anyo == fecha_antigua.anyo &&
            fechas[i].mes == fecha_antigua.mes &&
            fechas[i].dia < fecha_antigua.dia
        )
            fecha_antigua = fechas[i];
    }

    printf("La fecha más antigua es %d/%d/%d",
        fecha_antigua.dia, fecha_antigua.mes, fecha_antigua.anyo
    );

    return 0;

}
