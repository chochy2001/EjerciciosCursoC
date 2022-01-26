/* Pedir su nombre al usuario y devolver el número de vocales que hay.*/

#include <stdio.h>
#include <string.h>

int cuentaVocales(char *nombre);

int main(){

    char nombre[50];

    printf("Introduce tu nombre: ");
    fgets(nombre, 50, stdin);
    strtok(nombre, "\n");

    printf("El número de vocales que hay en tu nombre es: %d\n", cuentaVocales(nombre));

    return 0;
}


int cuentaVocales(char *nombre){
    int contador = 0;

    while(*nombre){ // != '\0'
        switch(*nombre){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': contador++;
        }
        nombre++;
    }

    return contador;
}

