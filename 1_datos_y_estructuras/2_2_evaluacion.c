#include <stdio.h>

int main(){

    char letra1, letra2;
    int suma;

    printf("Por favor, introduce un carácter: ");
    scanf("\n%c", &letra1);

    printf("Por favor, introduce otro carácter: ");
    scanf("\n%c", &letra2);

    suma = letra1 + letra2;

    printf(
        "Si sumamos el código ASCII del carácter %c que es %d "
        "con el código ASCII del carácter %c que es %d "
        "obtenemos el número %d",
        letra1, letra1, letra2, letra2, suma
    );

    return 0;

}
