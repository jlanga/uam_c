#include <stdio.h>
#include <string.h>

#define MAXSIZE 6

int main() {
    
    int tabla[MAXSIZE], resto;
    double media1, media2;
    
    printf("Introduce el primer número entero: ");
    scanf("%d", &tabla[0]);
    printf("Introduce el segundo número entero: ");
    scanf("%d", &tabla[1]);
    printf("Introduce el tercer número entero: ");
    scanf("%d", &tabla[2]);
    printf("Introduce el cuarto número entero: ");
    scanf("%d", &tabla[3]);
    printf("Introduce el quinto número entero: ");
    scanf("%d", &tabla[4]);
    printf("Introduce el sexto número entero: ");
    scanf("%d", &tabla[5]);
    
    media1 = (tabla[0] + tabla[2] + tabla[4]) / 3.0;
    media2 = (tabla[1] + tabla[3] + tabla[5]) / 3.0;
    resto = tabla[5] % tabla[0];
    
    printf(
        "La media de los números %d, %d y %d es %.6lf\n",
        tabla[0], tabla[2], tabla[4], media1
    );
    printf(
        "La media de los números %d, %d y %d es %.6lf\n",
        tabla[1], tabla[3], tabla[5], media2
    );
    printf(
        "El resto de la division de %d y %d es %d\n",
        tabla[5], tabla[0], resto
    );
    
    
    
    return 0;
}
