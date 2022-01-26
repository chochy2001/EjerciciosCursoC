/*
Hacer una variable de tipo int, otra de tipo float y por
último una de tipo char, almacenar datos en cada una de las variables,
posteriormente indicar la posicion de memoria donde se encuentran
guardados los datos de cada variable. Con punteros.
*/

#include <stdio.h>

int main(){

    int entero = 10,*apuntadorEntero;
    apuntadorEntero = &entero;

    float flotante = 10.5,*apuntadorFlotante = &flotante;
    char caracter = 'a',*apuntadorCaracter = &caracter;

    printf("Entero (variable): %d\n",entero);
    printf("Apuntador *: %d \n",*apuntadorEntero);
    printf("Apuntador Entero: %p\n",apuntadorEntero);
    printf("Direccion en memoria de entero: %p\n\n",&entero);

    printf("Flotante (variable): %f\n",flotante);
    printf("Apuntador *: %f \n",*apuntadorFlotante);
    printf("Apuntador Flotante: %p\n",apuntadorFlotante);
    printf("Direccion en memoria de flotante: %p\n\n",&flotante);

    printf("Caracter (variable): %c\n",caracter);
    printf("Apuntador *: %c \n",*apuntadorCaracter);
    printf("Apuntador Caracter: %p\n",apuntadorCaracter);
    printf("Direccion en memoria de caracter: %p\n",&caracter);



    return 0;
}


