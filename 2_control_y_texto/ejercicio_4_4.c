/*
Partiendo de un fichero compuesto por un número indeterminado de filas de 3 columnas, cada una de ellas formada por una cadena y 2 enteros:

Elena 25 43
Juan 5 8
Sonia 2 1
Julia 3 17

Escribe un programa que solicite el nombre del archivo con dichos datos y una letra inicial. A continuación, ha de leer los datos del fichero (teniendo en cuenta que el fichero puede tener cualquier número de líneas) y escribir al final del mismo cuántos nombres empiezan por la letra solicitada. El programa acabará informando si el resultado se ha escrito correctamente en el fichero o si este no se ha podido abrir.

Este es un ejemplo de ejecución basado en los datos anteriores (Elena, Juan, Sonia, Julia), que hemos guardado en datos.txt:

Teclea el nombre del archivo: datas.txt
Teclea una inicial: J
Error: no se pudo abrir el fichero datas.txt.

Y otro:

Teclea el nombre del archivo: datos.txt
Teclea una inicial: J
El resultado se ha guardado correctamente al final del fichero datos.txt

En este segundo ejemplo, el fichero datos.txt habrá quedado de la forma:

Elena 25 43
Juan 5 8
Sonia 2 1
Julia 3 17
Hay 2 nombres que empiezan por la inicial J.
*/


#include <stdio.h>
#include <string.h>

#define MAX 20

int main() {

    FILE *fEntrada;
    char entrada[MAX], nombre[MAX], inicial;
    int col1, col2, nombres_con_inicial;

    printf("Teclea el nombre del archivo: ");
    scanf("%s", entrada);

    printf("Teclea una inicial: ");
    scanf("\n%c", inicial);
    printf("%c", inicial);

    if ((fEntrada = fopen(entrada, "r")) == NULL) {
        printf("Error: no se pudo abrir el fichero %s.\n", entrada);
        return 1;
    }

    while (fscanf(fEntrada, "%s %d %d", nombre, &col1, &col2) == 3) {
        if (strcmp(nombre[0], inicial) == 0)
            nombres_con_inicial++;
    }

    fclose(fEntrada);

    if ((fEntrada = fopen(entrada, "a")) == NULL) {
        printf("Error: no se pudo abrir el fichero %s.\n", entrada);
        return 1;
    }

    fprintf(
        fEntrada,
        "Hay %d nombres que empiezan por la inicial %c.\n",
        nombres_con_inicial, inicial
    );

    fclose(fEntrada);

    return 0;
}
