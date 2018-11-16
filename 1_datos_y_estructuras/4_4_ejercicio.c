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

    Invocador invocador[5];

    printf("DATOS JUGADOR 1");
    printf("¿Cuál es tu nombre de invocador? ");
    gets(invocador[0].nombre);
    printf("¿Con qué campeón has jugado tu última partida? ");
    getchar();
    gets(invocador[0].juego.campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &invocador[0].juego.kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &invocador[0].juego.kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &invocador[0].juego.kda[2]);

    printf(
        "%s, tu KDA ratio con %s ha sido %.2lf.\n\n",
        invocador[0].nombre,
        invocador[0].juego.campeon,
        (invocador[0].juego.kda[0] + invocador[0].juego.kda[2] ) / (float) invocador[0].juego.kda[1]
    );

    printf("DATOS JUGADOR 2");

    getchar();
    printf("¿Cuál es tu nombre de invocador? ");
    gets(invocador[1].nombre);
    printf("¿Con qué campeón has jugado tu última partida? ");
    gets(invocador[1].juego.campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &invocador[1].juego.kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &invocador[1].juego.kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &invocador[1].juego.kda[2]);

    printf(
        "%s, tu KDA ratio con %s ha sido %.2lf.\n\n",
        invocador[1].nombre,
        invocador[1].juego.campeon,
        (invocador[1].juego.kda[0] + invocador[1].juego.kda[2] ) / (float) invocador[1].juego.kda[1]
    );

    getchar();
    printf("DATOS JUGADOR 3");
    printf("¿Cuál es tu nombre de invocador? ");
    gets(invocador[2].nombre);
    printf("¿Con qué campeón has jugado tu última partida? ");
    getchar();
    gets(invocador[2].juego.campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &invocador[2].juego.kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &invocador[2].juego.kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &invocador[2].juego.kda[2]);

    printf(
        "%s, tu KDA ratio con %s ha sido %.2lf.\n\n",
        invocador[2].nombre,
        invocador[2].juego.campeon,
        (invocador[2].juego.kda[0] + invocador[2].juego.kda[2] ) / (float) invocador[2].juego.kda[1]
    );

    printf("DATOS JUGADOR 4");
    getchar();

    printf("¿Cuál es tu nombre de invocador? ");
    gets(invocador[3].nombre);
    printf("¿Con qué campeón has jugado tu última partida? ");
    getchar();
    gets(invocador[3].juego.campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &invocador[3].juego.kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &invocador[3].juego.kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &invocador[3].juego.kda[2]);

    printf(
        "%s, tu KDA ratio con %s ha sido %.2lf.\n\n",
        invocador[3].nombre,
        invocador[3].juego.campeon,
        (invocador[3].juego.kda[0] + invocador[3].juego.kda[2] ) / (float) invocador[3].juego.kda[1]
    );
    
    printf("DATOS JUGADOR 5");
    getchar();

    printf("¿Cuál es tu nombre de invocador? ");
    gets(invocador[4].nombre);
    printf("¿Con qué campeón has jugado tu última partida? ");
    getchar();
    gets(invocador[4].juego.campeon);
    printf("¿Cuántos asesinatos has hecho? ");
    scanf("%d", &invocador[4].juego.kda[0]);
    printf("¿Cuántas veces has muerto? ");
    scanf("%d", &invocador[4].juego.kda[1]);
    printf("¿Y cuántas asistencias has hecho? ");
    scanf("%d", &invocador[4].juego.kda[2]);

    printf(
        "%s, tu KDA ratio con %s ha sido %.2lf.\n\n",
        invocador[4].nombre,
        invocador[4].juego.campeon,
        (invocador[4].juego.kda[0] + invocador[4].juego.kda[2] ) / (float) invocador[4].juego.kda[1]
    );

    int k = invocador[0].juego.kda[0] + invocador[1].juego.kda[0] + invocador[2].juego.kda[0] + invocador[3].juego.kda[0] + invocador[4].juego.kda[0];
    int d = invocador[0].juego.kda[1] + invocador[1].juego.kda[1] + invocador[2].juego.kda[1] + invocador[3].juego.kda[1] + invocador[4].juego.kda[1];
    int a = invocador[0].juego.kda[2] + invocador[1].juego.kda[2] + invocador[2].juego.kda[2] + invocador[3].juego.kda[2] + invocador[4].juego.kda[2];

    printf(
        "Usuarios %s, %s, %s, %s y %s, el KDA de vuestra partida ha sido %d/%d/%d y su ratio %.2lf",
        invocador[0].nombre,
        invocador[1].nombre,
        invocador[2].nombre,
        invocador[3].nombre,
        invocador[4].nombre,
        k, d, a,
        (k + a) / (double) d
    );

    return 0;

} 
