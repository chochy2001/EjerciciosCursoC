// * Hacer un programa que borre la pantalla al pulsar 1

#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    printf("\nPrograma que borra la pantalla al pulsar el numero 1");
    printf("\n------------------------------------------------------\n");
    printf("escribe el numero 1\n");
    scanf("%i",&numero);

    if(numero == 1){
        system("cls");
        printf("Ha borrado la pantalla\n");
    }if(numero = 2) {
        system("dir");
        printf("Eso es todo en el directorio actual\n");
    }
        else{
            printf("El numero ingresado no es 1\n");
            scanf("%d",&numero);
            if(numero == 1) {
                system("cls");
                printf("Ha borrado la pantalla\n");
        }
    }
    return 0;
}