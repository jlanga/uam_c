/*
Escribe un programa que lea el archivo de calificaciones y genere un nuevo
archivo llamado listado.txt que contenga una línea por estudiante con la
siguiente información: DNI, calificación numérica y calificación alfabética.

La calificación alfabética será:
    Suspenso si la nota es menor que 5.
    Aprobado si la nota es mayor o igual que 5 y menor que 7.     Notable si la nota es mayor o igual que 7 y menor que 9.     Sobresaliente si la nota es mayor o igual que 9 y menor que 10.     Matrícula si la nota es igual a 10.  Las dos primeras filas del archivo generado salida serán:  02289512 8.095 notable 02667819 3.810 suspenso
*/

#include <stdio.h>
#include <string.h>

#define DNI_MAX 10
#define CHAR_MAX 20

int main() {
    FILE *fEntrada, *fSalida;
    char entrada[CHAR_MAX] = "notas.txt",
        salida[CHAR_MAX] = "salida.txt",
        calificacion[CHAR_MAX];
    int dni[DNI_MAX], modelo, preguntas, aciertos, fallos;
    double nota;

    if((fEntrada = fopen(entrada, "r")) == NULL) {
        printf("Error al abrir el archivo %s.\n", entrada);
        return 1;
    }

    if ((fSalida = fopen(salida, "w")) == NULL) {
        printf("Error al abrir el archivo %s.\n", salida);
        fclose(fEntrada);
        return 1;
    }

    while (fscanf(fEntrada,             "%s %d %d %d %d %lf",
           dni, &modelo, &preguntas, &aciertos, &fallos, &nota) == 6
        ) {
        if (nota < 5) {
            strcpy(calificacion, "Suspenso");
        } else if (nota < 7) {
            strcpy(calificacion, "Aprobado");
        } else if (nota < 9) {
            strcpy(calificacion, "Notable");
        } else if (nota < 10) {
            strcpy(calificacion, "Sobresaliente");
        } else {
            strcpy(calificacion, "Matrícula");
        }
        fprintf(fSalida, "%s %.3lf %s\n", dni, nota, calificacion);
    }

    fclose(fEntrada);
    fclose(fSalida);
    return 0;
}
