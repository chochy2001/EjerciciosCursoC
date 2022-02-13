/*
Pedir al usuario una cadena de caracteres, reservar memoria con
malloc(),
almacenarlo en la memoria dinamica, posteriormente utilizar free()
para liberar el espacio de memoria dinamica utilizado.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palabra[50], *apuntador_palabra;
    int longitud;

    printf("Ingrese una palabra: ");
    fgets(palabra, 50, stdin);
    strtok(palabra, "\n");

    longitud = strlen(palabra);
    apuntador_palabra = (char*) malloc(longitud * sizeof(char));
    printf("sizeof char %d\n", sizeof(char));
    printf("strlen %d\n", strlen(palabra));


    strcpy(apuntador_palabra, palabra);
    printf("\nLa palabra ingresada es: %s", apuntador_palabra);

    free(apuntador_palabra);


    printf("\nLa palabra ingresada es: %s", apuntador_palabra);

    return 0;
}
