/*
Reservar memoria dinamica para una cadena de caracteres
de 10 espacios, luego
utilizar realloc para ampliar la memoria dinamica a 30 espacios.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *apuntador_nombre,*apuntador_nombre_completo,apellidos[40];


    apuntador_nombre = (char*) malloc(10*sizeof(char));
    //apuntador_nombre_completo = calloc(10,sizeof(char));

    printf("\n\nTu nombre completo es: %s\n",apuntador_nombre_completo);
    printf("Tu nombre completo es: %p\n",apuntador_nombre_completo);
    printf("Tu nombre: %s\n",apuntador_nombre);
    printf("Tu nombre: %p\n",apuntador_nombre);

    printf("Ingrese su nombre: (Sin apellidos)\n");
    fgets(apuntador_nombre,10,stdin);
    strtok(apuntador_nombre,"\n");

    printf("Tu nombre es: %s\n",apuntador_nombre);
    printf("\n\nTu nombre completo es: %s\n",apuntador_nombre_completo);
    printf("Tu nombre completo es: %p\n",apuntador_nombre_completo);
    printf("Tu nombre: %s\n",apuntador_nombre);
    printf("Tu nombre: %p\n",apuntador_nombre);

    apuntador_nombre_completo = realloc(apuntador_nombre,30*sizeof(char));
    printf("\n\nTu nombre completo es: %s\n",apuntador_nombre_completo);
    printf("Tu nombre completo es: %p\n",apuntador_nombre_completo);
    printf("Tu nombre: %s\n",apuntador_nombre);
    printf("Tu nombre: %p\n",apuntador_nombre);

    printf("Escribe tus apellidos: \n");
    fgets(apellidos,40,stdin);
    strtok(apellidos,"\n");

    strcat(apuntador_nombre_completo, apellidos);

    printf("\n\nTu nombre completo es: %s\n",apuntador_nombre_completo);
    printf("Tu nombre completo es: %p\n",apuntador_nombre_completo);
    printf("Tu nombre: %s\n",apuntador_nombre);
    printf("Tu nombre: %p\n",apuntador_nombre);

    free(apuntador_nombre);
    free(apuntador_nombre_completo);

    return 0;
}






