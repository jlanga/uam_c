#include <stdio.h>

int main() {

    // char sexo = 'M';
    // int cp = 2754, hp=159, caramelos=266;
    // double peso=183.0, altura=2.32;
    char sexo;
    int cp, hp, caramelos;
    double peso, altura;
    
    printf("Introduzca sexo (M/F): ");
    scanf("%c", &sexo);
    
    printf("Introduzca CP: ");
    scanf("%d", &cp);
    
    printf("Introduzca HP: ");
    scanf("%d", &hp);
    
    printf("Introduzca peso: ");
    scanf("%lf", &peso);
    
    printf("Introduzca altura: ");
    scanf("%lf", &altura);
    
    printf("Introduzca número de caramelos: ");
    scanf("%d", &caramelos);
    
    printf(
        "Sexo: %c\nCP: %d\nHP: %d\nPeso: %.1lf\nAltura: %.2lf\nCaramelos: %d\n",
        sexo, cp, hp, peso, altura, caramelos
    );
    
    return 0;

}
