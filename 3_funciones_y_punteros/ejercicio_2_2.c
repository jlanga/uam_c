/*
Escribe una función llamada niParesniNones que reciba dos enteros y modifique 
el segundo incrementándole en uno en el caso de que ambos sean pares o impares, 
de forma que las variables dejarán de ser pares o impares a la vez.

El programa principal solicitará ambos números al usuario, llamará a la función 
y volverá a mostrar los números por pantalla tras la llamada, por lo que dentro 
de la función no debe haber ningún printf() ni scanf().

Este sería un ejemplo del programa:

Introduce un número entero: 4
Introduce otro número entero: 9
Los números tras llamar a la función son: 4 y 9.

Y otro:

Introduce un número entero: 5
Introduce otro número entero: 7
Los números tras llamar a la función son: 5 y 8.
*/

#include <stdio.h>

void niParesniNones(int *num1, int *num2) {
    if(*num1 % 2 == *num2 % 2)
        (*num2)++;
}


int main() {

    int num1, num2;

    printf("Introduce un número entero: ");
    scanf("%d", &num1);

    printf("Introduce otro número entero: ");
    scanf("%d", &num2);

    niParesniNones(&num1, &num2);

    printf(
        "Los números tras llamas a la funcion son: %d y %d.\n",
        num1, num2
    );
    
    return 0;
}
