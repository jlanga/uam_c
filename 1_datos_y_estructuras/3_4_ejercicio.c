#include <stdio.h>

#define N 3
#define M 5

int main() {

    int matrix[N][M] = {
        {1, 0, 0, 0, 0},
        {0, 2, 0, 4, 5},
        {1, 2, 3, 4, 5}
    };

    printf(
        "Media experiencia últimas 5 partidas con Kassadin: %.2lf\n",
        (matrix[0][0] + matrix[0][1] + matrix[0][2] + matrix[0][3] + matrix[0][4]) / 5.0
    );
    printf(
        "Media experiencia últimas 5 partidas con Ahri: %.2lf\n",
        (matrix[1][0] + matrix[1][1] + matrix[1][2] + matrix[1][3] + matrix[1][4]) / 5.0
    );
    printf(
        "Media experiencia últimas 5 partidas con Jax: %.2lf\n",
        (matrix[2][0] + matrix[2][1] + matrix[2][2] + matrix[2][3] + matrix[2][4]) / 5.0
    );

    return 0;

}
