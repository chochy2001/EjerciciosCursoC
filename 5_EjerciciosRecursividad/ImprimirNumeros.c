//* Consideremos una funcion que recibe un numero
//* n e imprime los numeros del n al 1. Con recursividad

#include <stdio.h>

int listar( int numero);

int main(){

    int numero;

    printf("\nEscribe el numero de terminos:");
    scanf("%d",&numero);

    for (int i = numero; i>0; i--) {
        printf("%d\n",listar(i));
    }

    return 0;
}

int listar(int numero){
    if(numero == 1){
        return 1;
    }else{
        return listar(numero-1)+1;
    }
}
