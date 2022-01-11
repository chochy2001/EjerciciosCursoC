/*  Comprobar si un numero digitado
por el usuario es positivo o negativo*/

#include <stdio.h>

int main(){

    int numero;

    printf("Escribe un numero\n");
    scanf("%d",&numero);

    if(numero>=0){
        printf("El numero ingresado es positivo\n");
    }else{
        printf("El numero ingresado es negativo\n");
    }

    return 0;
}


