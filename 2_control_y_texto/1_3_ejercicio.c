/*
Escribe un programa que compruebe si eres menor de edad y, si es cierto, muestre
el mensaje "Eres menor de edad".

En caso de que seas mayor de edad, comprobará si tu edad es múltiplo de tres y 
mostrará el mensaje "Eres mayor de edad y tu edad es múltiplo de tres" o 
"Eres mayor de edad y tu edad no es múltiplo de tres" dependiendo de ello.

Este sería un ejemplo del programa, escribiendo 15 como edad:

    Introduce tu edad: 15
    Eres menor de edad

Otro ejemplo, escribiendo como edad 31:

    Introduce tu edad: 31
    Eres mayor de edad y tu edad no es múltiplo de tres

Y otro, escribiendo 21:

    Introduce tu edad: 21
    Eres mayor de edad y tu edad es múltiplo de tres

*/

#include <stdio.h>

int main() 
{
    int edad;
    
    printf("Introduce tu edad: ");
    scanf("%d", &edad);
    
    if (edad < 18)
        printf("Eres menor de edad\n");
    else if(edad % 3 == 0)
        printf("Eres mayor de edad y tu edad es múltiplo de tres\n");
    else
        printf("Eres mayor de edad y tu edad no es múltiplo de tres\n");
    
    return 0;
}
