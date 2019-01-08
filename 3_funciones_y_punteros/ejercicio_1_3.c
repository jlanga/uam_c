#include <stdio.h>

double area(int base, int altura) {
    double resultado;
    resultado = (base * altura) / 2.0;
    return resultado;
}

int main() {
    int base, altura;
    double resultado;

    printf("Introduce la base del triáángulo: ");
    scanf("%d", &base);
    printf("Introduce la altura del triáángulo: ");
    scanf("%d", &altura);

    resultado = area(base, altura);
    printf("El áárea del triáángulo de base %d y altura %d es %.2lf.", base, altura, resultado);

    return 0;

}
