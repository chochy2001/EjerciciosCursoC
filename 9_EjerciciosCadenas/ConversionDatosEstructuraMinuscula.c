/*Pedir el nombre de 3 familiares al usuario (en MAYUSCULAS),
y posteriormente convertir los datos a minusculas.*/

#include <stdio.h>
#include <string.h>


struct familia{
    char nombre[20];
}familiares[3];

int main(){

    for (int i = 0; i < 3; ++i) {
        printf("Introduce el nombre del familiar[%d]: ",i+1);
        fgets(familiares[i].nombre,20,stdin);
        strtok(familiares[i].nombre,"\n");
    }

    for (int i = 0; i < 3; ++i) {
        printf("Nombre del familiar[%d]: %s\n",i+1,familiares[i].nombre);
    }

    for (int i = 0; i < 3; ++i) {
        strlwr(familiares[i].nombre);
    }

    for (int i = 0; i < 3; ++i) {
        printf("Nombre del familiar[%d]: %s\n",i+1,familiares[i].nombre);
    }



    return 0;
}