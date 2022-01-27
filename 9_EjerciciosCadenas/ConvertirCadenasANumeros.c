/*Pedir dos cadenas numericas al usuario.
Luego Convertirlas a numeros enteros. Sumar el valor y entregar el
resultado.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char cadena1[10], cadena2[10];
    int valor1, valor2, resultado;

    printf("Ingrese una cadena numerica: ");
    fgets(cadena1, 10, stdin);
    strtok(cadena1, "\n");

    printf("Ingrese una cadena numerica: ");
    fgets(cadena2, 10, stdin);
    strtok(cadena2, "\n");

    valor1 = atoi(cadena1);
    valor2 = atoi(cadena2);

    resultado = valor1 + valor2;
    printf("El resultado de la suma es: %d\n", resultado);


    return 0;
}