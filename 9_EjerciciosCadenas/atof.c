/*Utilizar la funcion atof() para pasar una cadena
(por ejemplo: "123.45"), a numero flotante.*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char *cadena = "123.45";

    printf("%.2f\n", atof(cadena));

    return 0;
}