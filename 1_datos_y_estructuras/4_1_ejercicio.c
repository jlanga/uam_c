#include <stdio.h>

#define MAX_STR 128

typedef struct {
    char nombre[MAX_STR];
    int nivel;
    int experiencia;
    char campeon[MAX_STR];
    int asesinatos;
    int muertes;
    int asistencias; 
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
    scanf("%d", &datos.asesinatos);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &datos.muertes);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &datos.asistencias);

    printf(
        "%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf",
        datos.nombre,
        datos.nivel,
        datos.experiencia,
        datos.campeon,
        (datos.asesinatos + datos.asistencias) / (double) datos.muertes
    );

    return 0; 

}
