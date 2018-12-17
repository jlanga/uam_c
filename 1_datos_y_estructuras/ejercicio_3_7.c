#include <stdio.h>
#include <string.h>

#define MAXLEN 40

int main() {

    char palabra[MAXLEN];
    int len;

    printf("Escribe una palabra: ");
    scanf("%s", palabra);
    printf("La longitud de dicha palabra es: %d.\n", strlen(palabra));
    printf("Indica un número menor a dicha longitud: ");
    scanf("%d", &len);
    palabra[len] = 0;
    printf("La palabra cortada en la letra %d es: %s.", len, palabra);

    return 0;

}
