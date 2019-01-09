#include <stdio.h>

#define INCREMENTO 5
#define TAM 3

void incrementar(int* tabla) {

    int i, *p;
    
    for (i=0, p = &tabla[0]; i < TAM; i++, p++)
        *p += INCREMENTO;

    return;
}

int main() {

    int tabla[TAM] = {2, 4, 7};

    printf(
        "El contenido de la tabla es: %d %d %d\n", 
        tabla[0], tabla[1], tabla[2]
    );

    incrementar(tabla);

    printf(
        "El nuevo contenido de la tabla es: %d %d %d\n",
        tabla[0], tabla[1], tabla[2]
    );

    return 0;
}
