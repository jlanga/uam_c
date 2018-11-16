#include <stdio.h>

#define N 3
#define M 2

int main() {

    char matrix[N][M] = {
        {'X', 'O'},
        {'O', 'X'},
        {'X', 'X'}
    };

    int fila, columna;

    printf("Introduce una fila: ");
    scanf("%d", &fila);
    printf("Introduce una columna: ");
    scanf("%d", &columna);
    printf("En la fila %d, columna %d encontramos: %c\n",
        fila, columna,
        matrix[fila-1][columna-1]
    );

    printf("Introduce una fila: ");
    scanf("%d", &fila);
    printf("Introduce una columna: ");
    scanf("%d", &columna);
    printf("En la fila %d, columna %d encontramos: %c\n",
        fila, columna,
        matrix[fila-1][columna-1]
    );

    return 0;

}
