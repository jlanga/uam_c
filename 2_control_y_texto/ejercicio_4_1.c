/*
Escribe un programa que lea este archivo de texto, que contiene los resultados
de las calificaciones de un examen tipo test. Cada línea se compone de:
identificador del estudiante, modelo, número de aciertos, número de fallos,
número de respuestas en blanco y calificación.

Tras la lectura, tendrá que calcular por separado la nota media de los
estudiantes del modelo 1 y del modelo 2.

Según el fichero notas.txt especificado, esta sería la salida del programa:

La nota media del modelo 1 es: 7.235
La nota media del modelo 2 es: 7.170
*/

#include <stdio.h>

int main() {

    FILE *f;
    int dni, modelo, aciertos, fallos, en_blanco;
    int n_modelo1=0, n_modelo2=0;
    double calificacion, media1=0, media2=0;

    f = fopen("ejercicio_4_1_notas.txt", "r");
    if (f == NULL) {
        printf("Error abriendo el archivo\n");
        return 1;
    }

    for(int i=0; fscanf(f, "%d %d %d %d %d %lf", &dni, &modelo, &aciertos, &fallos, &en_blanco, &calificacion) == 6; i++) {
            if(modelo == 1){
                n_modelo1++;
                media1 += calificacion;
            } else if (modelo == 2) {
                n_modelo2++;
                media2 += calificacion;
            }
        }

    printf("La nota media del modelo 1 es: %.3lf\n", media1 / n_modelo1);
    printf("La nota media del modelo 2 es: %.3lf\n", media2 / n_modelo2);

    fclose(f);

    return 0;
}
