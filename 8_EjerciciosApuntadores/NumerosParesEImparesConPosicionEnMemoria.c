/*
Rellenar un array de 10 numeros, posteriormente utilizando
punteros indicar cuáles son numeros pares y su posicion en memoria.
*/

#include <stdio.h>

int main(){

    int numeros[10],*apuntadorNumero;

    for (int i = 0; i < 10; ++i) {
        printf("Introduce el numero en la posicion numeros[%d]: ",i);
        scanf("%d",&numeros[i]);
    }

    apuntadorNumero = numeros;

    for (int i = 0; i < 10; ++i) {
        if(*apuntadorNumero%2 == 0){
            printf("El numero %d es par",*apuntadorNumero);
            printf(" y su posicion en memoria es %p\n",apuntadorNumero);
            printf("\n");
        }
        apuntadorNumero++;
    }

    return 0;
}
