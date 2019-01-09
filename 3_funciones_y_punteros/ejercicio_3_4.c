#include <stdio.h>
#include <string.h>

#define TAM 100

int minu_a_mayu(char *p) {
    int longitud = 0;
    for(; *p != 0; p++) {
        *p += 'A' -'a';
        longitud++;
    }
    return longitud;
} 

int main() {
    char cadena[TAM], *p;
    int longitud;

    printf("Introduce una cadena de caracteres: ");
    scanf("%s", cadena);

    longitud = minu_a_mayu(cadena);

    printf(
        "La cadena en mayúsculas es %s y su tamaño %d.\n",
        cadena, longitud
    );

    return 0;
}
