#include <stdio.h>

int main() {
    
    char sexo = 'M';
    int cp = 2754, hp=159, caramelos=266;
    double peso=183.0, altura=2.32;
    
    printf(
        "Sexo: %c\nCP: %d\nHP: %d\nPeso: %.1lf\nAltura: %.2lf\nCaramelos: %d\n",
        sexo, cp, hp, peso, altura, caramelos
    );
    
    return 0;

}
