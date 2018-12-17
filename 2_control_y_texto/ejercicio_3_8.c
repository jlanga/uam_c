/*
Escribe un programa que muestre, utilizando bucles anidados, la suma de dos matrices 3x3 de números enteros.

Habiendo inicializado en la declaración las matrices como:

int a[3][3]={1,2,3,4,5,6,7,8,9};
int b[3][3]={0,1,2,4,2,3,1,4,5};

Esto sería el resultado del programa:

1   3   5
8   7   9
8  12  14
*/


#include <stdio.h>

#define FIL 3
#define COL 3

int main() {

    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={0,1,2,4,2,3,1,4,5};

    int i, j;

    for (i=0; i < 3; i++) {
        for (j=0; j < 3; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
