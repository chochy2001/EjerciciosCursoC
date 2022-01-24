/*
Realizar un programa en C que lea un arreglo de
estructuras los datos de N empleados de la empresa y que imprima
los datos del empleado con mayor y menor salario.
*/

#include <stdio.h>
#include <string.h>

struct empleado{
    char nombre[20],sexo[20];
    float salario;
}empleados[100];

int main(){

    int numeroEmpleados,mayorSalario = 0.0,posicionMayorSalario,menorSalario = 1000000,posicionMenorSalario;
    printf("Ingrese el numero de empleados: ");
    scanf("%d",&numeroEmpleados);

    for (int i = 0; i < numeroEmpleados; ++i) {
        fflush(stdin);
        printf("Ingrese el nombre del empleado %d: ",i+1);
        fgets(empleados[i].nombre,20,stdin);
        strtok(empleados[i].nombre,"\n");

        printf("Ingrese el sexo del empleado %d: ",i+1);
        fgets(empleados[i].sexo,20,stdin);
        strtok(empleados[i].sexo,"\n");

        printf("Ingrese el salario del empleado %d: ",i+1);
        scanf("%f",&empleados[i].salario);
        printf("\n");
    }


    for (int i = 0; i < numeroEmpleados; ++i) {
        if(empleados[i].salario > mayorSalario){
            mayorSalario = empleados[i].salario;
            posicionMayorSalario = i;
        }
        if(empleados[i].salario < menorSalario){
            menorSalario = empleados[i].salario;
            posicionMenorSalario = i;
        }
    }

    for (int i = 0; i < numeroEmpleados; ++i) {
        printf("Nombre: %s\nSexo: %s\nSalario: %.2f\n\n",empleados[i].nombre,empleados[i].sexo,empleados[i].salario);
    }

    printf("El empleado con mayor salario es: %s con un salario de: %.2f\n",empleados[posicionMayorSalario].nombre,empleados[posicionMayorSalario].salario);
    printf("El empleado con menor salario es: %s con un salario de: %.2f\n",empleados[posicionMenorSalario].nombre,empleados[posicionMenorSalario].salario);

    return 0;
}
