/*Copiar la cadena de caracteres "Hola mundo" de un array a otro.
Luego cambiar la palabra "mundo" por "y bienvenido al lenguaje C".*/

#include <stdio.h>
#include <string.h>

int main(){

    char cadena1[] = "Hola mundo",cadena2[40];

    strcpy(cadena2,cadena1);
    printf("%s\n",cadena2);

    strcpy(cadena2+5,"y bienvenido al lenguaje C");

    printf("%s\n",cadena2);



    return 0;
}

