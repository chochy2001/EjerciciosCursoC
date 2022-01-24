/*Pedir los datos para N alumnos, y calcular cual de todos tiene
el mejor promedio, e imprimir sus datos.*/

#include <stdio.h>
#include <string.h>

struct promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct alumno{
    char nombre[20];
    char sexo[20];
    int edad;
    struct promedio prom;
}alumnos[100];

int main(){

    int promedioMayor = 0,totalAlumnos,AlumnoPMayor;
    float promediosAlumnos[100];

    printf("Escribe el total de Alumnos: ");
    scanf("%d",&totalAlumnos);

    for (int i = 0; i < totalAlumnos; ++i) {
        fflush(stdin);

        printf("\nEscribe el nombre del alumno %d: ",i+1);
        fgets(alumnos[i].nombre,20,stdin);
        strtok(alumnos[i].nombre,"\n");

        printf("\nEscribe el sexo del alumno %d: ",i+1);
        fgets(alumnos[i].sexo,20,stdin);
        strtok(alumnos[i].sexo,"\n");

        printf("\nEscribe la edad del alumno %d: ",i+1);
        scanf("%d",&alumnos[i].edad);

        printf("\nEscribe las notas del alumno %d:",i+1);
        scanf("%f %f %f",&alumnos[i].prom.nota1,&alumnos[i].prom.nota2,&alumnos[i].prom.nota3);

        printf("\n");
        promediosAlumnos[i] = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3)/3;

        if(promediosAlumnos[i] > promedioMayor){
            promedioMayor = promediosAlumnos[i];
            AlumnoPMayor = i;
        }
    }

    printf("\nEl alumno con el Mayor Promedio es:\n");
    printf("Nombre: %s\n",alumnos[AlumnoPMayor].nombre);
    printf("Sexo: %s\n",alumnos[AlumnoPMayor].sexo);
    printf("Edad: %d\n",alumnos[AlumnoPMayor].edad);
    printf("Promedio: %.2f\n",promediosAlumnos[AlumnoPMayor]);

    printf("\nPromedios de los Alumnos: \n");
    for (int i = 0; i < totalAlumnos; ++i) {
        printf("Nombre: %s\n",alumnos[i].nombre);
        printf("Promedio: %.2f\n",promediosAlumnos[i]);
    }

    return 0;
}














