/*
Partiendo de un fichero compuesto por un número indeterminado de filas de 3 columnas, cada una de ellas formada por una cadena y 2 enteros, como el que sigue:

Elena 5 3
Juan 24 8
Sonia 12 1

Haz un programa principal que solicite el nombre del archivo con los datos de entrada, otro nombre para el archivo que se va a crear con los datos de salida y un número entero.

El programa debe crear un fichero de texto con los nombres de las personas cuya suma de la segunda y tercera columnas se encuentra por debajo del valor númerico introducido.

El programa acabará mostrando un mensaje indicando si se ha podido guardar el resultado o si ha habido algún problema al abrir los ficheros.

Lo que sigue son varios ejemplos de ejecución (para estos ejemplos el nombre correcto del archivo de entrada es datos.txt):

Teclea el nombre del archivo de entrada: datis.txt
Teclea el nombre del archivo de salida: nombres.txt
Teclea el valor del límite: 25
Error: no se pudo abrir el fichero de entrada.

Lo que sigue es otro ejemplo de ejecución:

Teclea el nombre del archivo de entrada: datos.txt
Teclea el nombre del archivo de salida: nombres.txt
Teclea el valor del límite: 25
Se ha creado correctamente el fichero nombres.txt con los resultados

Para este últiimo caso, y basándose en el fichero puesto como ejemplo al principio del enunciado, nombres.txt contendrá los siguientes datos:

Elena
Sonia

El programa ha de funcionar igual con cualquier fichero que pueda tener cualquier número de líneas.

NOTA: Si abres el fichero resultante desde el Bloc de notas de Windows es probable que veas toda la información en la misma línea. Para poder verlo correctamente, utiliza otro editor de texto como WordPad.
*/

#include <stdio.h>
#include <string.h>

#define MAX 20

int main() {

    FILE *fEntrada, *fSalida;
    char entrada[MAX], salida[MAX], nombre[MAX];
    int limite, columna1, columna2;

    printf("Teclea el nombre del archivo de entrada: ");
    scanf("%s", entrada);

    printf("Teclea el nombre del archivo de salida: ");
    scanf("%s", salida);

    printf("Teclea el valor del límite: ");
    scanf("%d", &limite);

    if ((fEntrada = fopen(entrada, "r")) == NULL) {
        printf("Error: no se pudo abrir el fichero de entrada.\n");
        return 1;
    }

    if ((fSalida = fopen(salida, "w")) == NULL) {
        printf("Error: no se pudo abrir el fichero de salida.\n");
        fclose(fSalida);
        return 1;
    }

    while (fscanf(fEntrada, "%s %d %d", nombre, &columna1, &columna2) == 3) {
        if( columna1 + columna2 < limite)
            fprintf(fSalida, "%s\n", nombre);
    }

    fclose(fEntrada);
    fclose(fSalida);

    printf("Se ha creado correctamente el fichero %s con los resultados\n", salida);

    return 0;
}
