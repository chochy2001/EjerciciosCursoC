/*
Pedir al usuario que digite una palabra.
Luego mostrar la palabra, la palabra invertida y comprobar si es capicua.
*/

#include <stdio.h>
#include <string.h>

int main(){

    char palabra1[50], palabra2[50];

    printf("Introduce una palabra: ");
    fgets(palabra1, 50, stdin);
    strtok(palabra1, "\n");

    strcpy(palabra2, palabra1);
    strrev(palabra2);

    printf("\nPalabra: %s", palabra1);
    printf("\nPalabra invertida: %s", palabra2);


    if(strcmp(palabra1, palabra2) == 0){
        printf("\nLa palabra es capicua");
    }else{
        printf("\nLa palabra no es capicua");
    }


    return 0;
}





