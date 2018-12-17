/*
Escribe un programa en C que solicite por teclado una cadena de caracteres y
guárdala en una variable del tamaño 128 (utiliza macros).

Para simplificar, puedes asumir que el usuario va a introducir el carácter '_'
en lugar de espacios.

A continuación, para cada carácter de la cadena, el programa mostrará por
pantalla todas las vocales minúsculas anteriores a dicho carácter.

Lo que sigue es un ejemplo de ejecución:

Escribe una cadena de caracteres: Hola_mundo
las vocales anteriores al caracter H son:
las vocales anteriores al caracter o son:
las vocales anteriores al caracter l son: o
las vocales anteriores al caracter a son: o
las vocales anteriores al caracter _ son: o a
las vocales anteriores al caracter m son: o a
las vocales anteriores al caracter u son: o a
las vocales anteriores al caracter n son: o a u
las vocales anteriores al caracter d son: o a u
las vocales anteriores al caracter o son: o a u

Otro ejemplo:

Escribe una cadena de caracteres: Yo_soy_tu_padre
Las vocales anteriores al caracter Y son:
Las vocales anteriores al caracter o son:
Las vocales anteriores al caracter _ son: o
Las vocales anteriores al caracter s son: o
Las vocales anteriores al caracter o son: o
Las vocales anteriores al caracter y son: o o
Las vocales anteriores al caracter _ son: o o
Las vocales anteriores al caracter t son: o o
Las vocales anteriores al caracter u son: o o
Las vocales anteriores al caracter _ son: o o u
Las vocales anteriores al caracter p son: o o u
Las vocales anteriores al caracter a son: o o u
Las vocales anteriores al caracter d son: o o u a
Las vocales anteriores al caracter r son: o o u a
Las vocales anteriores al caracter e son: o o u a
*/

#include <stdio.h>
#include <string.h>

#define MAX 128

int main() {

    char cadena[MAX] = "", letra;
    int i, j, len;


    printf("Escribe una cadena de caracteres: ");
    scanf("%s", cadena);

    len = strlen(cadena);
    for (i = 0; i < len; i++){

        printf("Las vocales anteriores al caracter %c son: ", cadena[i]);

        for (j = 0 ; j < i; j++){
            letra = (char) cadena[j];
            if (letra == 'a' | letra == 'e' | letra == 'i' |
                letra == 'o' | letra == 'u') {
                printf("%c ", letra);
            }
        }
        printf("\n");
    }

    return 0;
}
