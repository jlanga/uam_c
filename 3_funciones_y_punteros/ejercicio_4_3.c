#include <stdio.h>
#include <stdlib.h>

int main() {

    int filas, columnas, **matriz, i, j;

    printf("Introduce el núúmero de filas de la matriz: ");
    scanf("%d", &filas);
    printf("Introduce el número de columnas de la matriz: ");
    scanf("%d", &columnas);

    matriz = (int **) malloc(filas * sizeof(int*));

    if (matriz == NULL) {
        printf("No se ha podido resevar la memoria\n");
        return 1;
    }

    for(i=0; i<filas; i++) {
        matriz[i] = (int*) malloc(columnas * sizeof(int));
        if (matriz[i] == NULL) {
            for(j=0; j<i; j++) 
                free(matriz[j]);
            free(matriz);
            printf("No se ha podido reservar la memoria\n");
            return 1;
        }
    }

    for(i = 0; i < filas; i++) {
        for (j=0; j<columnas; j++) {
            printf("Introduce el valor de la fila %d y la columna %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Matriz:\n");
    for (i=0; i< filas; i++){
        for(j=0;j<columnas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i=0; i< filas; i++)
        free(matriz[i]);
    free(matriz);

    return 0;

}
