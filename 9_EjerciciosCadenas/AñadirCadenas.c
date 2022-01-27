/*
Pedir una cadena al usuario, posteriormente utilizar
la funcion strcat() para
añadir la frase "Que tengas un buen dia", al final de la cadena.
*/


#include <stdio.h>
#include <string.h>

int main(){

    char cadena[100];
    printf("Introduce un texto: ");
    fgets(cadena, 100, stdin);
    strtok(cadena, "\n");

    printf("%s\n", cadena);
    strcat(cadena, " Que tengas un buen dia\n");

    printf("\n%s\n", cadena);


    return 0;
}