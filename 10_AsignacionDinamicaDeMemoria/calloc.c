// * Reserva memoria con calloc para una cadena de caracteres

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *apuntador_palabra,palabra[50];
    printf("Digita una palabra\n");
    fgets(palabra,50,stdin);
    strtok(palabra,"\n");
    //palabra\0

    apuntador_palabra = calloc(strlen(palabra),sizeof(char));

    strcpy(apuntador_palabra,palabra);
    printf("%s\n",apuntador_palabra);
    free(apuntador_palabra);

    printf("%s\n",apuntador_palabra);
    printf("%d\n",apuntador_palabra);


    return 0;
}
