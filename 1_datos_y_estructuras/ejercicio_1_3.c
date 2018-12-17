#include <stdio.h>

int main() {
    
    double temporadas;
    double capitulos;
    double minutos_por_capitulo;
    double minutos_de_intro;
    double minutos;
    
    printf("Piensa en una serie que hayas visto");
    
    printf("¿Cuántas temporadas tiene? ");
    scanf("%lf", &temporadas);
    
    printf("¿Cuántos capítulos tiene cada temporada? ");
    scanf("%lf", &capitulos);
    
    printf("¿Cuántos minutos duran aproximadamente los capítulos? ");
    scanf("%lf", &minutos_por_capitulo);
    
    printf("¿Y su intro? ");
    scanf("%lf", &minutos_de_intro);
    
    minutos = temporadas * capitulos * (minutos_por_capitulo - minutos_de_intro) / 60;
    
    printf("¡En total has invertido unas %lf horas en ver la serie!", minutos);          

    return 0;

}
