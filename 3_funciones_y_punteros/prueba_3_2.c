/*
Escribe un programa con el siguiente prototipo de función:

void numeroDeVocales(int *vocales, char *palabra)

La función contará las vocales de palabra y almacenará el número de cada vocal en la tabla vocales de la siguiente manera: en la posición 0 la cantidad de aes, en la posición 1 la cantidad de es y así sucesivamente hasta las úes.

El programa principal solicitará una palabra y llamará a numeroDeVocales() para calcular las vocales que tiene. Por último mostrará la cantidad de cada una de las vocales por pantalla.

Lo que sigue es un ejemplo de ejecución del programa:

Introduce una palabra: Especiero
La palabra Especiero tiene:
A o a: 0
E o e: 3
I o i: 1
O u o: 1
U o u: 0

Y otro:

Introduce una palabra:  supercalifragilisticoespialidoso
La palabra supercalifragilisticoespialidoso tiene:
A o a: 3
E o e: 2
I o i: 6
O u o: 3
U o u: 1
*/

#include <stdio.h>
#include <string.h>

#define MAX 128

void numeroDeVocales(int *vocales, char *palabra) {
    for(; *palabra != 0; palabra++) {
        if (*palabra == 'a' || *palabra == 'A')
            vocales[0]++;
        else if (*palabra == 'e' || *palabra == 'E')
            vocales[1]++;
        else if (*palabra == 'i' || *palabra == 'I')
            vocales[2]++;
        else if (*palabra == 'o' || *palabra == 'O')
            vocales[3]++;
        else if (*palabra == 'u' || *palabra == 'U')
            vocales[4]++;
    }
}


int main() {

    char palabra[MAX];
    int vocales[5] = {0, 0, 0, 0, 0};

    printf("Introduce una palabra: ");
    scanf("%s", palabra);

    numeroDeVocales(vocales, palabra);

    printf("La palabra &s tiene:\n");
    printf("A o a: %d\n", vocales[0]);
    printf("E o e: %d\n", vocales[1]);
    printf("I o i: %d\n", vocales[2]);
    printf("O o o: %d\n", vocales[3]);
    printf("U o u: %d\n", vocales[4]);

    return 0;

}
