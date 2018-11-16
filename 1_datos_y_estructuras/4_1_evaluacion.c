#include <stdio.h>

#define SIZE_SUMA 3
#define SIZE_RESTO 2

typedef struct {
    int numeros[SIZE_SUMA];
    int suma;
} Suma;

typedef struct {
    Suma suma[SIZE_RESTO];
    int resto;
} Resto;


int main (){
    
    Resto resto;
    
    printf("Introduce el primer entero de la primera tabla: ");
    scanf("%d", &resto.suma[0].numeros[0]);
    printf("Introduce el segundo entero de la primera tabla: ");
    scanf("%d", &resto.suma[0].numeros[1]);
    printf("Introduce el tercer entero de la primera tabla: ");
    scanf("%d", &resto.suma[0].numeros[2]);
    
    resto.suma[0].suma = \
        resto.suma[0].numeros[0] + 
        resto.suma[0].numeros[1] +
        resto.suma[0].numeros[2];
    
    printf("Introduce el primer entero de la segunda tabla: ");
    scanf("%d", &resto.suma[1].numeros[0]);
    printf("Introduce el segundo entero de la segunda tabla: ");
    scanf("%d", &resto.suma[1].numeros[1]);
    printf("Introduce el tercer entero de la segunda tabla: ");
    scanf("%d", &resto.suma[1].numeros[2]);
    
    resto.suma[1].suma = \
        resto.suma[1].numeros[0] + 
        resto.suma[1].numeros[1] +
        resto.suma[1].numeros[2];
    
    resto.resto = resto.suma[0].suma % resto.suma[1].suma;
    
    printf("La suma de los elementos de la primera tabla es %d.\n", resto.suma[0].suma );
    printf("La suma de los elementos de la segnda tabla es %d.\n", resto.suma[1].suma);
    printf("El resto de la división de ambas sumas es %d.\n", resto.resto);
    
    return 0;
}
