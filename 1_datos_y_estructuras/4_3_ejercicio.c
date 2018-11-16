#include <stdio.h>

#define MAX_LEN 128

typedef struct {
    char campeon[MAX_LEN];
    int kda[3];
} Juego;


typedef struct {
    char nombre[MAX_LEN];
    int nivel;
    int experiencia;
    Juego juego;
} Invocador;


int main () {

    Invocador invocador;

    printf("¿Cuál es tu nombre de invocador? ");
    gets(invocador.nombre);
    printf("¿Cuál es tu nivel?" );
    scanf("%d", &invocador.nivel);
    printf("¿Cuánta experiencia has adquirido ya en dicho nivel? ");
    scanf("%d", &invocador.experiencia);
    printf("¿Con qué campeón has jugado tu última partida? ");
    getchar();
    gets(invocador.juego.campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &invocador.juego.kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &invocador.juego.kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &invocador.juego.kda[2]);

    printf(
        "%s, de nivel %d y experiencia %d, tu KDA ratio con %s ha sido %.2lf.",
        invocador.nombre,
        invocador.nivel,
        invocador.experiencia,
        invocador.juego.campeon,
        (invocador.juego.kda[0] + invocador.juego.kda[2] ) / (float) invocador.juego.kda[1]
    );

    return 0;
    
} 
