/*Realice un programa que permita leer una cadena de caracteres y
que devuelva el numero de caracteres que tiene dicha cadena e
imprimir dicha cadena al reves.*/

#include <stdio.h>
#include <string.h>

int main(){

    char palabra[50];
    int i=0;

    printf("Ingrese una palabra: ");
    fgets(palabra, 50, stdin);
    strtok(palabra, "\n");

    while(palabra[i] != '\0'){
        i++;
    }

    printf("La palabra tiene %d caracteres\n", i);

    printf("La palabra al reves es: ");

    while(i>=0){
        printf("%c", palabra[i--]);
    }

    return 0;
}
