/* Ingresar por teclado el nombre, la edad y el sexo de
cualquier persona e
imprima, solo si la persona es de sexo femenino y
mayor de edad, el nombre de
la persona.*/

#include <stdio.h>
#include <string.h>

int main(){

    char nombre[30],sexo[20];
    int edad;

    printf("Escribe tu nombre\n");
    fgets(nombre,30,stdin);
    strtok(nombre,"\n");

    printf("Escribe tu edad\n");
    scanf("%d",&edad);
    fflush(stdin);

    printf("Escribe tu sexo\n");
    fgets(sexo,30,stdin);
    strtok(sexo,"\n");

    if((strcmp(sexo,"femenino") == 0) && (edad >= 18)){
        printf("\nCumple con los requisitos: %s",nombre);
    }else{
        printf("\nNo cumple con los requisitos");
    }

    return 0;
}



