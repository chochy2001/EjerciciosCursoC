/* Hacer 2 arrays de cadena de caracteres, pedir el nombre al usuario
guardarlo dentro de un array y luego, copiar el contenido de ese array
a otro.*/

#include <stdio.h>
#include <string.h>

#define TAM 20

int main(){
    char nombre1[TAM],nombre2[TAM];

    printf("nombre1: %s\n",nombre1);

    for (int i = 0; i < TAM; ++i) {
        printf("nombre1[%d] = %d\n",i,nombre1[i]);
    }

    printf("nombre2: %s\n",nombre2);
    for (int i = 0; i < TAM; ++i) {
        printf("nombre2[%d] = %d\n",i,nombre2[i]);
    }

    printf("Ingrese su nombre: ");
    fgets(nombre1,TAM,stdin);
    strtok(nombre1,"\n");

    printf("\nnombre1: %s",nombre1);
    printf("\nnombre2: %s",nombre2);

    strcpy(nombre2,nombre1);
    printf("Su nombre es: %s\n",nombre2);

    printf("\nnombre1: %s",nombre1);
    printf("\nnombre2: %s",nombre2);

    return 0;
}
