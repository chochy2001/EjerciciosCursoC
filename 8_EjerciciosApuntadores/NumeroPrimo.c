/*
Determinar si un número es primo o no; con puteros y
además indicar en que posicion de memoria se guardó el número.
*/

#include <stdio.h>

int main(){

    int numero,*apuntadorNumero = &numero,contador = 0;

    printf("Introduce un numero: ");
    scanf("%d",&numero);

    for (int i = 1; i <= *apuntadorNumero; ++i) {
        if (*apuntadorNumero%i==0){
            contador++;
        }
    }

    if(contador>2){
        printf("El numero %d no es primo\n",*apuntadorNumero);
        printf("Posicion en memoria: %p",apuntadorNumero);
    }else{
        printf("El numero %d es primo\n",*apuntadorNumero);
        printf("Posicion en memoria: %p",apuntadorNumero);
    }



    return 0;
}