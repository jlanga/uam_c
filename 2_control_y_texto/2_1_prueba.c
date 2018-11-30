/*
Escribe un programa en C que pida por teclado dos palabras, y que cree y
escriba por pantalla una tercera palabra que tenga la concatenación de las dos
palabras introducidas, pero la segunda con sus caracteres en orden inverso.

Lo que sigue es un ejemplo de ejecución:

    Escribe la primera palabra: Universidad
    Escribe la segunda palabra: Autónoma

    La palabra resultante de concatenar Universidad y Autónoma es: UniversidadamonótuA

Otro ejemplo:

    Escribe la primera palabra: Rick
    Escribe la segunda palabra: diculous
    La palabra resultante de concatenar Rick y diculous es: Ricksuolucid
*/

#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {

    char palabra1[MAX], palabra2[MAX];
    int i, n;

    printf("Escribe la primera palabra: ");
    scanf("%s", palabra1);

    printf("Escribe la segunda palabra: ");
    scanf("%s", palabra2);

    //Imprimimos la primera parte
    printf("La palabra resultante de concatenar %s y %s es: %s",
        palabra1, palabra2, palabra1
    );
    // Y ahora la segunda del reves
    n = strlen(palabra2);
    i = n-1;
    while(i >= 0) {
        printf("%c", palabra2[i]);
        i--;
    }

    printf("\n");

    return 0;
}
