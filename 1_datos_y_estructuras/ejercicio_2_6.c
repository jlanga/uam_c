#include <stdio.h>

int main() {

    char l1, l2, l3, l4, l5;
    
    printf("Introduce un caracter: ");
    scanf("%c", &l1);
    printf("Introduce un segundo caracter: ");
    scanf("\n%c", &l2);
    printf("Introduce un tercer caracter: ");
    scanf("\n%c", &l3);
    printf("Introduce un cuarto caracter: ");
    scanf("\n%c", &l4);
    printf("Introduce un quinto caracter: ");
    scanf("\n%c", &l5);
    
    printf("La palabra cifrada es: %c%c%c%c%c\n", l1, l2 , l3, l4 , l5);
    printf("La palabra original es: %c%c%c%c%c", l1-3, l2-3, l3-3, l4-3, l5-3);
    
    return 0;
    
}
