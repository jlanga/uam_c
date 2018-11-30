/*
Escribe un programa que solicite:

    Una cadena de caracteres en minúsculas. Puedes considerar que el usuario
        siempre va a introducir una cadena en minúsculas y sin espacios.
    Un carácter en minúsculas
    Un carácter en mayúsculas

Con dichos datos, el programa tendrá que mostrar:

    La cadena de caracteres en minúsculas, habiendo cambiado el carácter en
    minúsculas introducido por el usuario por el carácter en mayúsculas, si lo
    contiene.
    La cadena resultante, del revés.

Recuerda que debes emplear bucles while y/o do-while, según consideres.
Asimismo, es necesario realizar una comprobación de errores de los datos
introducidos por el usuario.

Esto sería un ejemplo del programa:

Introduce una cadena de caracteres en minúsculas: supercalifragilisticoespialidoso
Introduce un carácter en minúculas: i
Introduce un carácter en mayúsculas: W
supercalWfragWlWstWcoespWalWdoso
osodWlaWpseocWtsWlWgarfWlacrepus

Y este, otro:

Introduce una cadena de caracteres en minúsculas: sagas
Introduce un carácter en minúculas: 5
Error, el carácter tiene que estar comprendido entre a y z. Vuelve a intentarlo: F
Error, el carácter tiene que estar comprendido entre a y z. Vuelve a intentarlo: a
Introduce un carácter en mayúsculas: 7
Error, el carácter tiene que estar comprendido entre A y Z. Vuelve a intentarlo: g
Error, el carácter tiene que estar comprendido entre A y Z. Vuelve a intentarlo: U
sUgUs
sUgUs
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {

    char texto[MAX], mayuscula, minuscula;
    int i;
    printf("Introduce una cadena de caracteres en minúsculas: ");
    scanf("%s", texto);

    printf("Introduce un carácter en minúsculas: ");
    do {
        getchar();
        scanf("%c", &minuscula);
        printf("%c", minuscula);
        if (strcmp(minuscula, "a") < 0 || strcmp(minuscula, "z") > 0)
            printf(
                "Error, el carácter tiene que estar comprendido entre a y z. "
                "Vuelve a intentarlo: "
            );

    } while (strcmp(minuscula, "a") < 0 || strcmp(minuscula, "z") > 0);

    printf("Introduce un caracter en mayúsculas: ");
    do {
        scanf("%c", &mayuscula);

        if (strcmp(mayuscula, "A") < 0 || strcmp(mayuscula, "Z") > 0)
            printf(
                "Error, el carácter tiene que estar comprendido entre A y Z."
                "Vuelve a intentarlo: "
            );

    } while (strcmp(mayuscula, "A") < 0 || strcmp(mayuscula, "Z") >0);

    i = 0;
    while(i < strlen(texto)) {
        if (texto[i] == minuscula)
            printf("%s", mayuscula);
        else
            printf("%s", texto[i]);
        i++;
    }

    printf("\n");

    i = strlen(texto) - 1;
    while(i>=0) {
        if (texto[i] == minuscula)
            printf("%s", mayuscula);
        else
            printf("%s", texto[i]);
        i--;
    }

    return 0;
}
