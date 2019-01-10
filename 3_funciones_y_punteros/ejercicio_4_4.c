#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void letra_esta_en_cadena(char letra, char *cadena) {
    int n = strlen(cadena), i, esta=0;
    for(i=0; i<n; i++) {
        if(letra == cadena[i])
            esta=1;
    }
    if (esta) {
        printf("El caracter %c aparece en la cadena %s\n", letra, cadena);
    } else {
        printf("El caracter %c NO aparece en la cadena %s\n", letra, cadena);
    }

}


int main() {

    int tamanyo, i;
    char *cadena1, *cadena2;

    printf("Introduce el tamaño mááximo de las cadenas de caracteres: ");
    scanf("%d", &tamanyo);

    cadena1 = (char *) malloc(tamanyo * sizeof(char));
    
    if(cadena1 == NULL) {
        printf("No se ha podido reservar memoria\n");
        return 1;
    }

    

    cadena2 = (char *) malloc(tamanyo* sizeof(char));
    if (cadena2 == NULL){
        free(cadena1);
        printf("No se ha podido reservar memoria");
        return 1;
    }

    printf("Introduce una cadena: ");
    scanf("%s", cadena1);

    printf("Introduce otra cadena: ");
    scanf("%s", cadena2);

    for (i=0; i < strlen(cadena1); i++)
        letra_esta_en_cadena(cadena1[i], cadena2);

    printf("%d", strlen(cadena2));

    free(cadena1);
    free(cadena2);

    return 0;
}
