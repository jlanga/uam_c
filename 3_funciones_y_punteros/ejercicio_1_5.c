#include <stdio.h>
#include <math.h>

int esPrimo(int num) {
    int i;
    for (i=2; i<=sqrt(num); i++) {
        if (num%i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int num;

    printf("Introduce un número entero: ");
    scanf("%d", &num);

    if (num <= 2) {
        return 0;
    }

    if(esPrimo(num) ) {
        if (esPrimo(num+2))
            printf("El núúmero %d es primo y el %d es primo gemelo", num, num+2);
        else
            printf("El núúmero %d es primo pero no tiene primo gemelo.\n", num);
    } else {
        printf("El núúmero %d no es primo.\n", num);
    }

    return 0;
}
