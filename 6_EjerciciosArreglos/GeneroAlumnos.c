/*Realice un programa que lea en un array el sexo de los N
estudiantes del curso de Algoritmos y que determine cuantos hombres y
cuantas mujeres se encuentran en el grupo, suponiendo que los datos
son extraidos alumno por alumno.*/

#include <stdio.h>
#include <string.h>

int main(){

    int totalAlumnos,hombre=0,mujer=0,indefinido=0;
    char alumnos[30];

    printf("Ingrese el total de alumnos: ");
    scanf("%d",&totalAlumnos);

    for (int i = 1; i <= totalAlumnos; ++i) {
        fflush(stdin);
        printf("Ingrese el sexo del alumno %d: ",i);
        fgets(alumnos,100,stdin);
        strtok(alumnos,"\n");

        if (strcmp(alumnos,"hombre")==0) {
            hombre++;
        }else if (strcmp(alumnos,"mujer")==0) {
            mujer++;
        }else{
            indefinido++;
        }
    }

    printf("\nTotal de hombres: %d",hombre);
    printf("\nTotal de mujeres: %d",mujer);
    printf("\nTotal de indeterminados: %d",indefinido);

    return 0;
}

