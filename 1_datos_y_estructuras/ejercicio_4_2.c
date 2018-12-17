#include <stdio.h>
#define MAX_STR 128

typedef struct {
    char nombre[MAX_STR];
    int nivel;
    int experiencia;
    char campeon[MAX_STR];
    int kda[3];
} Lol_struct;

int main() {

    Lol_struct datos;

    printf("¿Cuál es tu nombre de invocador? ");
    gets(datos.nombre);
    printf("¿Cuál es tu nivel? ");
    scanf("%d", &datos.nivel);
    printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
    scanf("%d", &datos.experiencia);
    printf("¿Con qué campeón has jugado tu última partida? ");
    getchar();
    gets(datos.campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &datos.kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &datos.kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &datos.kda[2]);

    printf(
        "%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf",
        datos.nombre,
        datos.nivel,
        datos.experiencia,
        datos.campeon,
        (datos.kda[0] + datos.kda[2]) / (double) datos.kda[1]
    );

    return 0;

}
