#include <stdio.h>

#define TAM 32

int main() {
    char cadena[TAM], *p;
    int i, longitud=0;

    for (i=0; i < TAM; i++)
        cadena[i] = '\0';

    printf("Introduce una cadena: ");
    scanf("%s", cadena);

    for (i=0, p=&cadena[0]; i < TAM; i++, p++)
        if(*p != '\0')
            longitud++;

    printf("%s tiene %d caracteres", cadena, longitud);

    return 0;
}
