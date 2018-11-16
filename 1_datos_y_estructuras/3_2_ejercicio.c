#include <stdio.h>

int main() {

    double peso;

    printf("Introduce tu peso: ");
    scanf("%lf", &peso);

    const double luna = 0.1655;
    const double marte = 0.3895;
    const double jupiter = 2.640;
    const double miller = 1.3;
    const double pandora = 0.8;
    const double vulcano = 1.4;

    printf("Tu peso en la Tierra es %.2f kg.\n", peso);
    printf("Tu peso en la luna es %.2f kg.\n", peso * luna);
    printf("Tu peso en Marte es %.2f kg.\n", peso * marte);
    printf("Tu peso en Júpiter es %.2f kg.\n", peso * jupiter);
    printf("Tu peso en el planeta Miller es %.2f kg.\n", peso * miller);
    printf("Tu peso en Pandora es %.2f kg.\n", peso * pandora);
    printf("Tu peso en la Tierra es %.2f kg.\n", peso * vulcano);
    
    return 0;

}
