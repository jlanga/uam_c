/*
Escribe un programa que utilice los datos generados en el fichero listado.txt, que has creado en el ejercicio anterior, para calcular la nota media.

Esta se guardará al final de ese mismo fichero, listado.txt, sin borrar el contenido que ya tiene:

[Información previa]
La nota media es: 7.20
*/

#include <stdio.h>
#include <string.h>

#define MAX 20
#define DNIMAX 10

int main() {

    FILE *fichero;
    char entrada[MAX] = "listado.txt", dni[DNIMAX], calificacion[MAX];
    double nota, media = 0;
    int i = 0;

    if ((fichero = fopen(entrada, "r")) == NULL) {
        printf("Error abriendo el fichero %s.\n", entrada);
        return 1;
    }

    while (fscanf(fichero, "%s %lf %s", dni, &nota, calificacion) == 3) {
        media += nota;
        i++;
    }

    fclose(fichero);

    if ((fichero = fopen(entrada, "a")) == NULL) {
        printf("Error abriendo el fichero %s.\n", entrada);
        return 1;
    }

    fprintf(fichero, "La nota media es: %.2lf\n", media / i);

    fclose(fichero);

    return 0;
}
