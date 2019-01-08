#include <stdio.h>

void area() {
    int base, altura;
    printf("Introduce la base del triangulo: ");
    scanf("%d", &base);
    printf("Introduce la altura del triangulo: ");
    scanf("%d", &altura);
    printf(
        "El area del triangulo de base %d y altura %d es %.2f", 
        base, altura, (float) base * altura / 2.0
    );
}


int main(void) {
  area();
  return 0;
}
