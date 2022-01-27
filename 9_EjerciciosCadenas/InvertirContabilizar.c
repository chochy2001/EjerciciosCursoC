/*Pedir una cadena al usuario y luego invertirla.
Diciendo además cuantos caracteres tiene.*/

#include <stdio.h>
#include <string.h>

int main(){

    char palabra[50];

    printf("Introduce una palabra: ");
    fgets(palabra, 50, stdin);
    strtok(palabra, "\n");

    printf("Palabra: %s\n", palabra);
    strrev(palabra);

    printf("La palabra invertida es: %s\n", palabra);
    printf("La palabra tiene %d caracteres\n", strlen(palabra));







    return 0;
}