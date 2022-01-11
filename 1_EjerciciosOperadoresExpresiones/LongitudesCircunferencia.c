/* Hacer un Programa que calcule
longitudes de Circunferencia. */

#include <stdio.h>
#define PI 3.1416

int main(){
    float radio,longitud;
    printf("Escribe el valor del radio de la circunferencia");
    scanf("%f",&radio);

    longitud = 2*PI*radio;

    printf("\nLa longitud de la circunferencia es: %.2f",longitud);
    return 0;
}
