#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int concatenar(char* cadena1, char* cadena2, char* cadena3) {
    int i, n1, n2;
    n1 = strlen(cadena1);
    n2 = strlen(cadena2);

    for (i=0; i<n1; i++)
        cadena3[i] = cadena1[i];
    for(i=0; i<n2; i++) 
        cadena3[n1+i] = cadena2[i];
    cadena3[n1+n2] = 0;

    return n1+n2;
}


int main() {
    int n, longitud;
    char *cadena1, *cadena2, *cadena3;


    printf("Introduce el tamaño máximo de las cadenas de caracteres: ");
    scanf("%d", &n);

    cadena1 = (char*) malloc(n * sizeof(char));
    if (cadena1 == NULL) return 1;
    
    cadena2 = (char*) malloc(n* sizeof(char));
    if (cadena2 == NULL){
        free(cadena1);
        return 1;
    }

    cadena3 = (char*) malloc( 2*n*sizeof(char));
    if(cadena3 == NULL) {
        free(cadena1);
        free(cadena2);
        return 1;
    }

    printf("Introduce una cadena: ");
    scanf("%s", cadena1);

    printf("Introduce otra cadena: ");
    scanf("%s", cadena2);

    longitud = concatenar(cadena1, cadena2, cadena3);

    printf("Cadena concatenada: %s\n", cadena3);
    printf("Longitud: %d\n", longitud);

    free(cadena1);
    free(cadena2);
    free(cadena3);

    return 0;
}
