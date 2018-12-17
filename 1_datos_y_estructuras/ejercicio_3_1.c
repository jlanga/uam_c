#include <stdio.h>

#define LUNA 0.1655
#define MARTE 0.3895
#define JUPITER 2.640
#define MILLER 1.3
#define PANDORA 0.8
#define VULCANO 1.4

int main() {
    
    double peso;
    
    printf("Introduce tu peso: ");
    scanf("%lf", &peso);
    
    printf("Tu peso en la Tierra es %.2f kg.\n", peso);     
    printf("Tu peso en la luna es %.2f kg.\n", peso * LUNA);     
    printf("Tu peso en Marte es %.2f kg.\n", peso * MARTE);     
    printf("Tu peso en Júpiter es %.2f kg.\n", peso * JUPITER);     
    printf("Tu peso en el planeta Miller es %.2f kg.\n", peso * MILLER);     
    printf("Tu peso en Pandora es %.2f kg.\n", peso * PANDORA);     
    printf("Tu peso en la Tierra es %.2f kg.\n", peso * VULCANO);
    
    return 0;
    
}
