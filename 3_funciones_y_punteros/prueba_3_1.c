/*
Escribe un programa con las siguientes estructuras:

    Una estructura llamada Contacto con un campo llamado nombre y otro llamado apellido.
    
    Una estructura llamada Agenda con un campo para una tabla de hasta 100 contactos y otro campo para un entero que almacene el número de contactos guardados en la agenda.

A continuación, escribe las siguientes funciones:

    La función con prototipo void iniciarAgenda(Agenda *ag); que inicialice a cero la variable que contiene el número de contactos de la agenda.
    
    La función con prototipo void addContacto(Agenda *ag, char *nom, char *apell); que añada un nuevo contacto a la agenda.
    
    La función con prototipo void mostrarAgenda(Agenda ag); que muestre todos los contactos de la agenda por pantalla.

En el programa principal declara una variable de tipo Agenda llamada agenda, una cadena de caracteres llamada nombre, una cadena de caracteres llamada apellido, un entero llamado i y un entero llamado num. Después, realiza los siguietnes pasos:

1. Llama a la función iniciarAgenda() para inicializar el número de contactos a cero.

2. Pregunta cuántos contactos se han de añadir a la agenda (guardando el número en la variable num).

3. Léelos (utilizando las variables nombre y apellido) y guárdalos en la agenda mediante la función addContacto().

4. Muestra todos los contactos introducidos por pantalla utilizando la función mostrarAgenda().

Lo que sigue es un ejemplo de ejecución del programa:

    ¿Cuántos contactos quieres guardar en la agenda?: 0
    ERROR: el valor debe estar entre 1 y 100.
    ¿Cuántos contactos quieres guardar en la agenda?: 102
    ERROR: el valor debe estar entre 1 y 100.
    ¿Cuántos contactos quieres guardar en la agenda?: 3
    Introduce el nombre del contacto 1: Daenerys
    Introduce el apellido del contacto 1: Targaryen
    Introduce el nombre del contacto 2: Jon
    Introduce el apellido del contacto 2: Snow
    Introduce el nombre del contacto 3: Cersei
    Introduce el apellido del contacto 3: Lannister

    Hay 3 contactos en la agenda:
    Contacto 1: Daenerys Targaryen
    Contacto 2: Jon Snow
    Contacto 3: Cersei Lannister


*/

#include <stdio.h>
#include <string.h>

#define MAX 100
#define TAM 20

typedef struct {
    char nombre[TAM];
    char apellido[TAM];
} Contacto;

typedef struct {
    int n_contactos;
    Contacto contactos[MAX];
} Agenda;

void iniciarAgenda(Agenda *ag) {
    ag->n_contactos = 0;
}

void addContacto(Agenda *ag, char *nom, char *apell) {

    Contacto contacto;
    strcpy(contacto.nombre, nom);
    strcpy(contacto.apellido, apell); 

    ag->contactos[ag->n_contactos] = contacto;
    ag->n_contactos++;
}

void mostrarAgenda(Agenda ag) {
    int i, n;
    n = ag.n_contactos;
    printf("Hay %d contactos en la agenda:\n", n);
    for(i = 0; i<n; i++) {
        printf(
            "Contacto %d: %s %s\n",
            i+1, ag.contactos[i].nombre, ag.contactos[i].apellido
        );
    }
}

int main() {
    Agenda agenda;
    char nombre[TAM], apellido[TAM];
    int i, num;

    iniciarAgenda(&agenda);

    do {
        printf("¿Cuántos contactos quieres guardar en la agenda?: ");
        scanf("%d", &num);
        if (num<1 || num > 100)
            printf("ERROR: el valor debe estar entre 1 y 100.\n");
    } while (num < 1 || num > 100);

    for(i=0; i < num; i++) {
        printf("Introduce el nombre del contacto %d: ", i+1);
        scanf("%s", nombre);
        printf("Introduce el apellido del contacto %d: ", i+1);
        scanf("%s", apellido);

        addContacto(&agenda, nombre, apellido);
    }

    mostrarAgenda(agenda);

    return 0;
}
