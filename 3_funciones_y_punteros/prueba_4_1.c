/*
Escribe un programa con las dos funciones siguientes:

int* numerosPares(int *original, int tamanoOriginal, int *tamanoTablaPares);

    Recibirá una tabla de enteros (original), su tamaño (tamanoOriginal) y un puntero a la variable con el tamaño de la tabla que va a crear durante su ejecución (tamanoTablaPares).
    Comprobará si los argumentos recibidos no son correctos (si alguno de los dos punteros apunta a NULL o el tamanoOriginal es menor que 1). En este caso debe devolver NULL.
    Contará cuántos números pares tiene la tabla recibida.
    Reservará memoria para una nueva tabla del tamaño de números pares contados. Si la memoria no se ha podido reservar correctamente, deberá devolver NULL.
    Guardará en la nueva tabla los números pares de la tabla original.
    Devolverá el puntero a la nueva tabla.
    NOTA: Esta función no mostrará ningún mensaje por pantalla.

int mostrarTabla(int *tabla, int tamano);

    Comprobara si los argumentos recibidos no son correctos (si el puntero es NULL o si el tamano es menor que 1). En ese caso debe devolver 0.
    A continuación mostrará por pantalla los elementos de la tabla, separados por un espacio.
    La función acabará devolviendo 1.
    NOTA: Esta función no tiene que mostrar por pantalla ningún otro mensaje, solo los números que contiene la tabla separados por espacios.

El programa principal debe solicitar al usuario que introduzca diez números.

A continuación ha de llamar a la función numerosPares para obtener una tabla con los números pares. Después ha de llamar a la función mostrarTabla para mostrar por pantalla los números pares obtenidos.

El programa debe comprobar el retorno de ambas funciones. Si alguna devuelve error, se debe informar y terminar con return 1; si todo ha ido bien, el programa debe terminar con return 0.

Lo que sigue es un ejemplo de ejecución del programa:

Introduce 10 números uno a uno:
Número 1: 12
Número 2: 56
Número 3: 45
Número 4: 78
Número 5: 9
Número 6: 13
Número 7: 44
Número 8: 98
Número 9: 11
Número 10: 7
Los números pares de la tabla son: 12 56 78 44 98

Puedes simular que se produce un error, por ejemplo, llamando a la función numerosPares() con un tamaño de tabla original negativo. En ese caso, otro ejemplo de ejecución sería:

Introduce 10 números uno a uno:
Número 1: 4
Número 2: 6
Número 3: 342
Número 4: 4654
Número 5: 321
Número 6: 43
Número 7: 564
Número 8: 23
Número 9: 54
Número 10: 2
Error en la ejecución del programa.
*/
#include <stdio.h>
#include <stdlib.h>

int* numerosPares(int *original, int tamanoOriginal, int *tamanoTablaPares) {

    int *numeros_pares, n_pares, i, i_pares;

    // Comprobará si los argumentos recibidos no son correctos (si alguno de los dos punteros apunta a NULL o el tamanoOriginal es menor que 1). En este caso debe devolver NULL.
    if(original == NULL || tamanoTablaPares == NULL || tamanoOriginal < 1)
        return NULL;

    // Contará cuántos números pares tiene la tabla recibida.
    for (i=0; i<tamanoOriginal; i++)
        if (original[i] % 2 ==0) (*tamanoTablaPares)++;
    
    //Reservará memoria para una nueva tabla del tamaño de números pares contados. Si la memoria no se ha podido reservar correctamente, deberá devolver NULL.    
    numeros_pares = (int*) malloc(n_pares * sizeof(int));
    if(numeros_pares == NULL) return NULL;

    // Guardará en la nueva tabla los números pares de la tabla original.

    i_pares = 0;
    for(i=0; i<tamanoOriginal; i++)
        if(original[i] % 2 == 0) {
            numeros_pares[i_pares] = original[i];
            i_pares++;
        }

    // Devolverá el puntero a la nueva tabla.
    return numeros_pares;

}

int mostrarTabla(int *tabla, int tamano) {

    int i;

    // Comprobara si los argumentos recibidos no son correctos (si el puntero es NULL o si el tamano es menor que 1). En ese caso debe devolver 0.
    if(tabla == NULL || tamano < 1) return 0;
    
    // A continuación mostrará por pantalla los elementos de la tabla, separados por un espacio.
    printf("Los números pares de la tabla son: ");
    for(i=0; i<tamano; i++) printf("%d ", tabla[i]);

    // La función acabará devolviendo 1.
    return 1;
}


int main() {

    int i, *numeros, *tabla_pares, tamano=10, tamano_pares=0, resultado_mostrar;

    numeros = (int*) malloc(tamano * sizeof(int));
    if (numeros == NULL){
        printf("No se pudo reservar la memoria\n");
        return 1;
    }

    printf("Introduce 10 números uno a uno:\n");
    for(i=0; i<tamano; i++){
        printf("Número %d: ", i+1);
        scanf("%d", &numeros[i]);
    }

    tabla_pares = numerosPares(numeros, tamano, &tamano_pares);
    
    if(tabla_pares == NULL) {
        printf("Error al ejecutar el programa");
        free(numeros);
        free(tabla_pares);
        return 1;
    }

    resultado_mostrar = mostrarTabla(tabla_pares, tamano_pares);
    
    if (resultado_mostrar == 0) printf("Error al mostrar la tabla\n");

    return 0;
}
