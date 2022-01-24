/*
Hacer una estructura llamada alumno, en la cual se tendran los
siguientes miembros: Nombre, edad, promedio, pedir datos al usuario
para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y
posteriormente imprimir los datos del alumno
*/

#include <stdio.h>
#include <string.h>

struct alumno{
    char nombre[20];
    int edad;
    float promedio;
}alumnos[3];

int main(){

    int posicion;
    float mejorCalificacion = 0.0;
    for (int i = 0; i < 3; ++i) {
        fflush(stdin);
        printf("Ingrese el nombre del alumno %d: ", i+1);
        fgets(alumnos[i].nombre, 20, stdin);
        strtok(alumnos[i].nombre, "\n");

        printf("Ingrese la edad del alumno %d: ", i+1);
        scanf("%d", &alumnos[i].edad);

        printf("Ingrese el promedio del alumno %d: ", i+1);
        scanf("%f", &alumnos[i].promedio);
        printf("\n");

    }

    for (int i = 0; i < 3; ++i) {
        if(alumnos[i].promedio > mejorCalificacion){
            mejorCalificacion = alumnos[i].promedio;
            posicion = i;
        }
    }

    printf("El alumno con mejor promedio es: \n");
    printf("Nombre: %s\n", alumnos[posicion].nombre);
    printf("Edad: %d\n", alumnos[posicion].edad);
    printf("Promedio: %.2f\n", alumnos[posicion].promedio);


    return 0;
}
