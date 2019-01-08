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



int primoMayor(int num) {

    int primoMayor = 0, i;

    for (i=2; i <= num; i++) {
        if(esPrimo(i)) {
           primoMayor = i;
        }
    }

    return primoMayor;

}


int main() {
    
    int num = 0;

    do {
        printf("Introduce un número superior a 1: ");
        scanf("%d", &num);
    } while (num <= 1);

    printf(
        "El mayor número primo comprendido entre 2 y %d es %d",
        num, primoMayor(num)
    );
    return 0;
}
