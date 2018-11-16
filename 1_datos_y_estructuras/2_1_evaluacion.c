#include <stdio.h>

int main() {

    double altura, peso;
    int edad;
    char inicial;

    printf("Por favor, introduce la altura en cm: ");
    scanf("%lf", &altura);
    printf("A continuación, introduce la edad en años: ");
    scanf("\n%d", &edad);
    printf("Por último, introduce la inicial del nombre: ");
    scanf("\n%c", &inicial);

    peso = altura - 100 + (9 * edad) / 100.0;

    printf(
        "El peso ideal de %c, que mide %.1lf cm y tiene %d años es de %.3lf kg.",
        inicial, altura, edad, peso
    );

    return 0;

}
