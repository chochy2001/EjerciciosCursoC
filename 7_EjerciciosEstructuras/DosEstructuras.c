/*
Hacer 2 estructuras una llamada promedio que tendra los siguientes
miembros: nota1,nota2,nota3; y otra llamada alumno que tendra los
siguientes miembros:nombre, sexo, edad; hacer que la estructura promedio
esté anidada en la estructura alumno, luego pedir todos los datos para un
alumno, luego calcular su promedio, y por último imprimir todos sus datos
incluidos el promedio.
*/

#include <stdio.h>
#include <string.h>

struct promedio{
    float nota1,nota2,nota3;
};
struct alumno{
    char nombre[20],sexo[20];
    int edad;
    struct promedio prom;
}alumno1;


int main(){

    printf("Ingrese el nombre del alumno: ");
    fgets(alumno1.nombre,20,stdin);
    strtok(alumno1.nombre,"\n");

    printf("Ingrese el sexo del alumno: ");
    fgets(alumno1.sexo,20,stdin);
    strtok(alumno1.sexo,"\n");

    printf("Ingrese la edad del alumno: ");
    scanf("%d",&alumno1.edad);

    printf("Escribe las notas del alumno\n");
    scanf("%f %f %f",&alumno1.prom.nota1,&alumno1.prom.nota2,&alumno1.prom.nota3);

    float promedio = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3)/3;

    printf("Datos del alumno\n");
    printf("Nombre: %s\n",alumno1.nombre);
    printf("Sexo: %s\n",alumno1.sexo);
    printf("Edad: %d\n",alumno1.edad);
    printf("Promedio: %.2f\n",promedio);



    return 0;
}