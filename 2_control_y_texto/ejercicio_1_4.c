/*
Escribe un programa que solicite al usuario el nombre de un mes en minúsculas 
(enero, febrero, ..., diciembre) y responda con un mensaje indicando el número 
de días del mes especificado. Si el usuario introduce un nombre de mes 
incorrecto, el programa también le informará.

Utiliza operadores lógicos para agrupar los meses con el mismo número de días 
dentro de la misma condición.

Este sería un ejemplo del programa:

    Introduce el nombre de un mes: febrero
    febrero tiene 28/29 días

Otro ejemplo:

    Introduce el nombre de un mes: marzo
    marzo tiene 31 días

Y otro:

    Introduce el nombre de un mes: abril
    abril tiene 30 días
*/

#include <stdio.h>
#include <string.h>

#define MAX_STR 100

int main() 
{
    char mes[MAX_STR];
    
    printf("Introduce el nombre de un mes: ");
    scanf("%s", mes);

    if (strcmp(mes, "febrero") == 0) {
        printf("%s tiene 28/29 días\n", mes);
    } else if(
        strcmp(mes, "enero") == 0 || 
        strcmp(mes, "marzo") == 0 || 
        strcmp(mes, "mayo") == 0 ||
        strcmp(mes, "julio") == 0|| 
        strcmp(mes, "agosto") == 0 || 
        strcmp(mes, "octubre") == 0 ||
        strcmp(mes, "diciembre") == 0
    ) {
        printf("%s tiene 31 días\n", mes);
    } else if(
        strcmp(mes, "abril") == 0 || 
        strcmp(mes, "junio") == 0 || 
        strcmp(mes, "septiembre") == 0 ||
        strcmp(mes, "noviembre") == 0
    ) {
        printf("%s tiene 30 días\n", mes);
    } else {
        printf("Mes incorrecto");
    }
    return 0;
}
