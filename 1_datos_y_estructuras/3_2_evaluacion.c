#include <stdio.h>
#include <string.h>

#define MAX 40

int main() {
    
    char cadena1[MAX], cadena2[MAX];
    int longitud;
    
    
    printf("Introduce una palabra: ");
    scanf("%s", &cadena1);
    
    longitud = strlen(cadena1);
    
    strcpy(cadena2, cadena1);
    cadena2[0] = cadena1[longitud-1];
    cadena2[longitud-1] = cadena1[0];
    
    printf(
        "Si a la palabra universidad, que tiene %d caracteres, "
        "le intercambiamos el primer y último carácter obtenemos la palabra %s",
        longitud, cadena2
    );
    
    
    
    return 0;
}
