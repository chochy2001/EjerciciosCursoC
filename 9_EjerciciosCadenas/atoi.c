/*Convertir una cadena (por ejemplo: "1234"), a un numero entero.
Con la funcion atoi().*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char *cadena = "1234";
    int numero;
    numero = atoi(cadena);

    printf("%d\n", atoi(cadena));
    printf("%d\n", numero);



    return 0;
}
