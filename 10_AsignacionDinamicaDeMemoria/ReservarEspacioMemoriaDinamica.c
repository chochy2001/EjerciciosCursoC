/*
Reservar espacio en memoria dinamica para un nombre,
y luego liberar la memoria utilizada con free().
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nombre[30],*apuntador_nombre;
    printf("Ingrese su nombre: ");
    fgets(nombre,30,stdin);
    strtok(nombre,"\n");

    apuntador_nombre = (char*) malloc(strlen(nombre)*sizeof(char));
    strcpy(apuntador_nombre,nombre);

    printf("\nSu nombre es: %s",apuntador_nombre);
    free(apuntador_nombre);

    printf("\nSu nombre es: %s",apuntador_nombre);
    return 0;
}