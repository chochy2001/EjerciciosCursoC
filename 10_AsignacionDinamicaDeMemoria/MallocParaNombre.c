/* Utilizar malloc para reservar memoria para un nombre(string)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int main(){

    char nombre[MAX_LENGTH],*apuntador_nombre;

    printf("Introduce tu nombre: ");
    fgets(nombre,MAX_LENGTH,stdin);
    strtok(nombre,"\n");

    apuntador_nombre = malloc(sizeof(char)*strlen(nombre));
    printf("%d\n",sizeof(char)*strlen(nombre));
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long long));
    printf("%d\n",strlen(nombre));


    strcpy(apuntador_nombre,nombre);
    printf("Tu nombre es: %s\n",apuntador_nombre);
    printf("Tu nombre es: %p\n",apuntador_nombre);

    free(apuntador_nombre);
    printf("Tu nombre es: %s\n",apuntador_nombre);
    printf("Tu nombre es: %p\n",apuntador_nombre);

    return 0;
}


