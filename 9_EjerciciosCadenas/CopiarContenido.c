/*
Pedir al usuario que digite una cadena, luego copiar su contenido
hacia otro array de caracteres. Y por último modificar su mensaje
poniendo a partir de la posicion 10 "Buena broma".
*/

#include <stdio.h>
#include <string.h>

int main(){

    char cadena1[50],cadena2[50];

    printf("Introduce una cadena: ");
    fgets(cadena1,50,stdin);
    strtok(cadena1,"\n");

    printf("\nCadena 1: %s",cadena1);
    printf("\nCadena 2: %s",cadena2);

    strcpy(cadena2,cadena1);

    printf("\nCadena 1: %s",cadena1);
    printf("\nCadena 2: %s",cadena2);

    strcpy(cadena2+10,"Buena broma");

    printf("\nCadena 1: %s",cadena1);
    printf("\nCadena 2: %s",cadena2);








    return 0;
}
