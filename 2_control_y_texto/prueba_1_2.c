/*
El programa que debes escribir necesita un tipo de dato estructurado que 
contenga tres miembros de tipo entero.

El programa debe declarar una variable de este tipo y solicitar al usuario tres
números enteros, que se deben guardar en los miembros de la variable 
estructurada.

El programa ha de informar de cuál es el menor de los tres números.

Los mensajes se han de mostrar tal y como aparecen en los siguientes ejemplos 
de ejecución y en el mismo orden, variando solo debido a los datos introducidos 
por el usuario.

Lo que sigue es un ejemplo de ejecución:

    Introduce el primer número: 17
    Introduce el segundo número: 6
    Introduce el tercer número: 8
    El número 6 es el menor
*/

typedef struct {
    int num1, num2, num3;
} Numeros;

#include <stdio.h>

int main() {
    
    Numeros numeros;
    
    printf("Introduce el primer número: ");
    scanf("%d", &numeros.num1);
    printf("Introduce el segundo número: ");
    scanf("%d", &numeros.num2);
    printf("Introduce el tercer número: ");
    scanf("%d", &numeros.num3);
    
    if (numeros.num1 <= numeros.num2 && numeros.num1 <= numeros.num3){
        printf("El número %d es el menor", numeros.num1);
    } else if(numeros.num2 <= numeros.num1 && numeros.num2 <= numeros.num3) {
        printf("El número %d es el menor", numeros.num2);
    } else {
        printf("El número %d es el menor", numeros.num3);
    }
    
    return 0;
}
