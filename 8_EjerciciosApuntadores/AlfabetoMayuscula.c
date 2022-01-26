//Imprimir el alfabeto en mayuscula con Punteros

#include <stdio.h>

int main(){

    char caracter, *apuntadorCaracter;
    apuntadorCaracter = &caracter;

    //*apuntadorCaracter = caracter -> son lo mismo

    printf("Caracter: %d, %c, %p\n", caracter, caracter, caracter);
    printf("Caracter: %d, %c, %p\n", &caracter, &caracter, &caracter);
    printf("Caracter: %d, %c, %p\n", apuntadorCaracter, apuntadorCaracter, apuntadorCaracter);
    printf("Caracter: %d, %c, %p\n", *apuntadorCaracter, *apuntadorCaracter, *apuntadorCaracter);
    printf("\n");


    for (caracter = 'A';caracter <= 'Z';caracter++){
        printf("%c ",*apuntadorCaracter);
    }
    printf("\nCaracter: %d, %c, %p\n", caracter, caracter, caracter);
    printf("Caracter: %d, %c, %p\n", &caracter, &caracter, &caracter);
    printf("Caracter: %d, %c, %p\n", apuntadorCaracter, apuntadorCaracter, apuntadorCaracter);
    printf("Caracter: %d, %c, %p\n", *apuntadorCaracter, *apuntadorCaracter, *apuntadorCaracter);
    printf("\n");

    for (caracter = 'a';caracter <= 'z';caracter++){
        printf("%c ",*apuntadorCaracter);
    }
    printf("\nCaracter: %d, %c, %p\n", caracter, caracter, caracter);
    printf("Caracter: %d, %c, %p\n", &caracter, &caracter, &caracter);
    printf("Caracter: %d, %c, %p\n", apuntadorCaracter, apuntadorCaracter, apuntadorCaracter);
    printf("Caracter: %d, %c, %p\n", *apuntadorCaracter, *apuntadorCaracter, *apuntadorCaracter);
    printf("\n");

    return 0;
}





