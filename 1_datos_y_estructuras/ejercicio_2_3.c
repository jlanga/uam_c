#include <stdio.h>

int main() {

    char sexo = 'M';
    int cp = 2754, hp=159, caramelos=266;
    double peso=183.0, altura=2.32;
    
    printf("Tamaño variable Sexo: %lu\n", sizeof(sexo));
    printf("Tamaño variable CP: %lu\n", sizeof(cp));
    printf("Tamaño variable HP: %lu\n", sizeof(hp));
    printf("Tamaño variable Peso: %lu\n", sizeof(peso));
    printf("Tamaño variable Altura: %lu\n", sizeof(altura));
    printf("Tamaño variable Caramelos: %lu\n", sizeof(caramelos));
    
    return 0;

}
