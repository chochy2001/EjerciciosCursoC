/*Pedir 2 nombres al usuario y comprobar si son iguales o no.*/

#include <stdio.h>
#include <string.h>

int main(){

    char nombre1[20], nombre2[20];

    printf("Introduce el primer nombre: ");
    fgets(nombre1, 20, stdin);
    strtok(nombre1, "\n");

    printf("Introduce el segundo nombre: ");
    fgets(nombre2, 20, stdin);
    strtok(nombre2, "\n");


    if(strcmp(nombre1, nombre2) == 0){
        printf("Los nombres son iguales.\n");
    }else{
        printf("Los nombres no son iguales.\n");
    }

    return 0;
}