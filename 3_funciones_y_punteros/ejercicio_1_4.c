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
    int num, i;

    printf("Introduce un número entero: ");
    scanf("%d", &num);

    if (num <= 1) {
        return 0;
    }

    for (i = 2; i <= num; i++) {
        if(esPrimo(i))
            printf("El núúmero %d es primo.\n", i);
        else
            printf("El núúmero %d no es primo.\n", i);
        
    }

    return 0;
}
