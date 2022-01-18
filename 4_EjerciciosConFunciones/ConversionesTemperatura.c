/* Hacer un programa que pida por pantalla una temperatura en grados
Celsius, muestre un menu para convertirlos a Fahrenheit o Kelvin y
muestre el equivalente por pantalla, utilizar funciones.

Celsius a Fahrenheit:
	F = (9*C)/5 + 32;

Celsius a Kelvin:
	K = C + 273.15

*/

#include <stdio.h>

float CelsiusAFahrenheit(float gradosCelsius);
float CelsiusAKelvin(float gradosCelsius);


int main(){

    float gradosCelsius;
    int opcionElegida;

    do{
        printf("\nEscribe los grados Celsius que quieres convertir: ");
        scanf("%f", &gradosCelsius);

        printf("\n1) Celsius a Fahrenheit\n2) Celsius a Kelvin\n3) Salir\n");
        printf("\nElige una opcion: ");
        scanf("%d", &opcionElegida);

        switch(opcionElegida){
            case 1: printf("\n%.2f grados Celsius son %.2f grados Fahrenheit\n", gradosCelsius, CelsiusAFahrenheit(gradosCelsius));
                    break;
            case 2: printf("\n%.2f grados Celsius son %.2f Kelvin\n", gradosCelsius, CelsiusAKelvin(gradosCelsius));
                    break;
            case 3: printf("\nGracias por usar el programa\n");
                    break;
            default: printf("\nOpcion no valida\n");
                    break;
        }

    }while(opcionElegida != 3);

    return 0;
}


float CelsiusAFahrenheit(float gradosCelsius){
    float Fahrenheit;
    Fahrenheit = 9*gradosCelsius/5 + 32;
    return Fahrenheit;
}


float CelsiusAKelvin(float gradosCelsius){
    float Kelvin;
    Kelvin = gradosCelsius + 273.15;
    return Kelvin;
}

