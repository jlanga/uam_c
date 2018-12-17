/******************************************************************************

Escribe un programa que solicite tu edad y muestre un 1 por pantalla si eres 
mayor de edad y tu edad no es múltiplo de tres. En caso contrario, el programa 
mostrará un 0.

Prueba qué se muestra si introduces los valores 15, 17, 20 y 21

NOTA: No utilices para este ejercicio ninguna condición (if), pues no las hemos 
trabajado en este curso aún.

*******************************************************************************/

#include <stdio.h>

int main () {
    
    int edad;
    
    printf("Introduce tu edad: ");
    scanf("%d", &edad);
    
    printf("%d", edad >= 18 && edad % 3 != 0);
    
    
    return 0;
}
