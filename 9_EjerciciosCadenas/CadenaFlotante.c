/* Pedir dos cadenas(con numero flotante) al usuario,
posteriormente multiplicar dichos numeros y mostrar su resultado.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char cadena1[50], cadena2[50];

    printf("Ingrese un numero flotante: ");
    fgets(cadena1, 50, stdin);
    strtok(cadena1, "\n");


    printf("Ingrese otro numero flotante: ");
    fgets(cadena2, 50, stdin);
    strtok(cadena2, "\n");


    float num1 = atof(cadena1), num2 = atof(cadena2);
    float resultado = num1 * num2;

    printf("El resultado de la multiplicacion es: %.2f", resultado);

    return 0;
}
