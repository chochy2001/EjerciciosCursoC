/* Hacer 2 arrays de cadenas de caracteres, almacenar 2 nombres
cada uno dentro de su respectiva variable, y luego intercambiar el
contenido de los arrays*/

#include <stdio.h>
#include <string.h>

#define TAMANIO 30

int main(){

    char nombre1[TAMANIO], nombre2[TAMANIO], auxiliar[TAMANIO];


    printf("Ingrese el primer nombre: ");
    fgets(nombre1, TAMANIO, stdin);
    strtok(nombre1, "\n");


    printf("Ingrese el segundo nombre: ");
    fgets(nombre2, TAMANIO, stdin);
    strtok(nombre2, "\n");

    printf("\nEl primer nombre es: %s", nombre1);
    printf("\nEl segundo nombre es: %s", nombre2);

    strcpy(auxiliar, nombre1);
    strcpy(nombre1, nombre2);
    strcpy(nombre2, auxiliar);

    printf("\nEl primer nombre es: %s", nombre1);
    printf("\nEl segundo nombre es: %s", nombre2);









    return 0;
}
