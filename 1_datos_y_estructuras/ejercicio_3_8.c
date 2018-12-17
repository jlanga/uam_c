#include <stdio.h>
#include <string.h>

#define MAX 40

int main() {

    char cadena1[MAX], cadena2[MAX];

    printf("Introduce una cadena: ");
    gets(cadena1);
    //getchar();

    printf("Introduce otra cadena: ");
    gets(cadena2);
    //getchar();

    printf(
        "El valor devuelto por la comparación de cadenas es: %d",
        strcmp(cadena1, cadena2)
    );

    return 0;

}
