/*Pedir 2 palabras al usuario y ordenarlas alfabeticamente.*/

#include <stdio.h>
#include <string.h>

int main(){

    char palabra1[20], palabra2[20];

    printf("Introduce una palabra: ");
    fgets(palabra1, 20, stdin);
    strtok(palabra1, "\n");

    printf("Introduce una palabra: ");
    fgets(palabra2, 20, stdin);
    strtok(palabra2, "\n");

    if(strcmp(palabra1, palabra2) < 0){
        // Si la primera palabra es menor que la segunda
        // (strcmp devuelve -1 si es menor, 0 si son iguales y 1 si es mayor)
        printf("%s %s", palabra1, palabra2);
    }else{
        printf("%s %s", palabra2, palabra1);
    }



    return 0;
}
