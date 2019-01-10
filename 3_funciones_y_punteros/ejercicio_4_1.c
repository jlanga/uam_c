#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros, n, i;
    double total;

    printf("Introduce cuántos números se van a leer: ");
    scanf("%d", &n);

    numeros = (int*) malloc(n * sizeof(int));

    if(numeros == NULL) {
        printf("No se ha podido reservar la memoria.\n");
        return 1;
    }

    for(i=0; i<n; i++) {
        printf("Introduce el número %i: ", i+1);
        scanf("%d", &numeros[i]);
        total += numeros[i];
    }

    printf("La media de los números leídos es: %.2lf\n", total / n);

    free(numeros);

    return 0;

}
