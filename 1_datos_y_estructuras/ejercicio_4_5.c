#include <stdio.h>
#define MAX_LEN 100

typedef struct {
    char campeon[MAX_LEN];
    int kda[3];
} Juego;

typedef struct {
    char nombre[MAX_LEN];
    Juego juegos[3];
} Jugador;


int main() {

    Jugador jugador1, jugador2;
    int k, d, a;

    printf("DATOS JUGADOR 1\n");
    printf("¿Cuál es tu nombre de invocador? ");
    scanf("%s", &jugador1.nombre);
    printf("¿Con qué campeón has jugado tu última partida? ");
    scanf("%s",&jugador1.juegos[0].campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &jugador1.juegos[0].kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &jugador1.juegos[0].kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &jugador1.juegos[0].kda[2]);
    printf("\n¿Con qué campeón has jugado tu penúltima partida? ");
    scanf("%s", &jugador1.juegos[1].campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &jugador1.juegos[1].kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &jugador1.juegos[1].kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &jugador1.juegos[1].kda[2]);
    printf("\n¿Con qué campeón has jugado tu antepenúltima partida? ");
    scanf("%s", &jugador1.juegos[1].campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &jugador1.juegos[2].kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &jugador1.juegos[2].kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &jugador1.juegos[2].kda[2]);

    k = jugador1.juegos[0].kda[0] + jugador1.juegos[1].kda[0] + jugador1.juegos[2].kda[0];
    d = jugador1.juegos[0].kda[1] + jugador1.juegos[1].kda[1] + jugador1.juegos[2].kda[1];
    a = jugador1.juegos[0].kda[2] + jugador1.juegos[1].kda[2] + jugador1.juegos[2].kda[2];

    printf(
        "%s, la media de tu KDA ratio de las 3 últimas partidas ha sido %.2lf.\n",
        jugador1.nombre,
        (k + a) / (double) d
    );


    printf("DATOS JUGADOR 2\n");
    printf("¿Cuál es tu nombre de invocador? ");
    scanf("%s", &jugador2.nombre);
    printf("¿Con qué campeón has jugado tu última partida? ");
    scanf("%s", &jugador2.juegos[0].campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &jugador2.juegos[0].kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &jugador2.juegos[0].kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &jugador2.juegos[0].kda[2]);
    printf("\n¿Con qué campeón has jugado tu penúltima partida? ");
    scanf("%s", &jugador2.juegos[1].campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &jugador2.juegos[1].kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &jugador2.juegos[1].kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &jugador2.juegos[1].kda[2]);
    printf("\n¿Con qué campeón has jugado tu antepenúltima partida? ");
    scanf("%s", &jugador2.juegos[1].campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &jugador2.juegos[2].kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &jugador2.juegos[2].kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &jugador2.juegos[2].kda[2]);
    
    k = jugador2.juegos[0].kda[0] + jugador2.juegos[1].kda[0] + jugador2.juegos[2].kda[0];
    d = jugador2.juegos[0].kda[1] + jugador2.juegos[1].kda[1] + jugador2.juegos[2].kda[1];
    a = jugador2.juegos[0].kda[2] + jugador2.juegos[1].kda[2] + jugador2.juegos[2].kda[2];

    printf(
        "%s, la media de tu KDA ratio de las 3 últimas partidas ha sido %.2lf.\n",
        jugador2.nombre,
        (k + a) / (double) d
    );

    return 0;

}
