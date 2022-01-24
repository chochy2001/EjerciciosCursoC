/*Hacer un arreglo de estructura llamada atleta para N atletas
que contenga los siguientes miembros: nombre, pais, numero_medallas.
y devuelva los datos (nombre, pais) del atleta que ha ganado el
mayor numero de medallas.*/

#include <stdio.h>
#include <string.h>

struct atleta{
    char nombre[20];
    char pais[20];
    int numero_medallas;
}atletas[100];

int main(){

    int numeroAtletas,maxMedallas = 0,posicion;
    printf("Ingrese el numero de atletas: ");
    scanf("%d", &numeroAtletas);

    for (int i = 0; i < numeroAtletas; ++i) {
        fflush(stdin);
        printf("Ingrese el nombre del atleta %d: ", i+1);
        fgets(atletas[i].nombre, 20, stdin);
        strtok(atletas[i].nombre, "\n");

        printf("Ingrese el pais del atleta %d: ", i+1);
        fgets(atletas[i].pais, 20, stdin);
        strtok(atletas[i].pais, "\n");

        printf("Ingrese el numero de medallas del atleta %d: ", i+1);
        scanf("%d", &atletas[i].numero_medallas);
        printf("\n");

    }

    for (int i = 0; i < numeroAtletas; ++i) {
        if(atletas[i].numero_medallas > maxMedallas){
            maxMedallas = atletas[i].numero_medallas;
            posicion = i;
        }
    }


    for (int i = 0; i < numeroAtletas; ++i) {
        printf("El atleta %s del pais %s ha ganado %d medallas\n", atletas[i].nombre, atletas[i].pais, atletas[i].numero_medallas);
    }

    printf("\n");
    printf("El atleta con más medallas es:\n");
    printf("El nombre del atleta es: %s\n", atletas[posicion].nombre);
    printf("El pais del atleta es: %s\n", atletas[posicion].pais);
    printf("El numero de medallas del atleta es: %d\n", atletas[posicion].numero_medallas);


    return 0;
}


