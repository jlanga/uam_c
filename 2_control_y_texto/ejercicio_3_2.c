#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {

    char cadena[MAX], segunda_mitad[MAX];
    int tamano, punto_medio;

    printf("Introduce una cadena de caracteres: ");
    gets(cadena);

    tamano = strlen(cadena);
    punto_medio = tamano / 2;

    for (int i = punto_medio; i < tamano; i++)
        segunda_mitad[i - punto_medio] = cadena[i];
    segunda_mitad[tamano-punto_medio] = '\0';

    printf(
        "La cadena camino tiene una longitud de %d caracteres y la "
        "mitad es la posición %d.\n",
        tamano, punto_medio
    );

    printf(
        "La segunda mitad de la cadena %s es %s.",
        cadena, segunda_mitad
    );

    return 0;
}
