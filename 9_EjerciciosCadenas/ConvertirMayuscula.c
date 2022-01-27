/*
Pedir al usuario su nombre, apellido, y ciudad en la que vive,
posteriormente convertir todo a MAYUSCULAS e imprimir los datos.
(Utilizar una estructura)
*/

#include <stdio.h>
#include <string.h>

struct datos {
    char nombre[50];
    char apellido[50];
    char ciudad[50];
}datos1;

int main(){

    printf("Ingrese su nombre: ");
    fgets(datos1.nombre, 50, stdin);
    strtok(datos1.nombre, "\n");

    printf("Ingrese su apellido: ");
    fgets(datos1.apellido, 50, stdin);
    strtok(datos1.apellido, "\n");

    printf("Ingrese su ciudad: ");
    fgets(datos1.ciudad, 50, stdin);
    strtok(datos1.ciudad, "\n");

    strupr(datos1.nombre);
    strupr(datos1.apellido);
    strupr(datos1.ciudad);

    printf("Su nombre es: %s\n", datos1.nombre);
    printf("Su apellido es: %s\n", datos1.apellido);
    printf("Su ciudad es: %s\n", datos1.ciudad);

    return 0;
}

