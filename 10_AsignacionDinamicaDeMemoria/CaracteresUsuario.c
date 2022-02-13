/* Pedir una cadena de caracteres al usuario, posteriormente
utilizar malloc para
reservar memoria para esa cadena de caracteres (string)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palabra[50],*apuntador_palabra;

    printf("Introduce una palabra: \n");
    fgets(palabra,50,stdin);
    strtok(palabra,"\n");

    apuntador_palabra = (char*)malloc(strlen(palabra));
    strcpy(apuntador_palabra,palabra);

    printf("La palabra introducida es: %s\n",apuntador_palabra);
    free(apuntador_palabra);


    return 0;
}


