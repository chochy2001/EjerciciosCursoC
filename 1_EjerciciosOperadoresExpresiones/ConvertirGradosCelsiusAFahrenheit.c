//Convertir grados celsius a grados fahrenheit

#include <stdio.h>

int main(){
    float gradosCelsius,gradosFahrenheit;
    printf("Escribe la cantidad de grados Celsius\n");
    scanf("%f",&gradosCelsius);

    gradosFahrenheit = (gradosCelsius * 1.8)+32;
    printf("\nEl equivalente en Grados Fahrenheit es: %.2f",gradosFahrenheit);

        return 0;
}


