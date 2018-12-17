#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {

    char cadena1[MAX], cadena2[MAX];

    printf("Introduce una cadena de caracteres: ");
    gets(cadena1);

    strcpy(cadena2, cadena1);
    printf("La cadena de caracteres copiada es: %s\n", cadena2);
    
    printf(
        "El resultado de comparar ambas cadenas es: %d",
        strcmp(cadena1, cadena2)
    );

    return 0;

}
