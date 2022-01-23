/*  Crear un programa que tenga un array de 100 numeros aleatorios
entre 1 y 1000. Una vez creado organizarlo de tal manera que almacene
los numeros pares en un array y los impares en otro.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CANTIDAD 100

int main(){

    int numero[CANTIDAD],pares[CANTIDAD],impares[CANTIDAD];
    srand(time(NULL));

    for (int i = 0; i < CANTIDAD; ++i) {
        numero[i] = rand()% +(1000+1);
    }
    printf("\n\nNumeros: \n");
    for (int i = 0; i < CANTIDAD; ++i) {
        printf("%d ",numero[i]);
    }
    for (int i = 0; i < CANTIDAD; ++i) {
        pares[i]= 0;
        impares[i]= 0;
    }

    printf("\nPares: \n");
    for (int i = 0; i < CANTIDAD; ++i) {
        if (numero[i]%2==0){
            printf("%d ",numero[i]);
            pares[i] = numero[i];
        }
    }
    printf("\n\n");
    for (int i = 0; i < CANTIDAD; ++i) {
        printf("%d ",pares[i]);
    }

    printf("\nImpares: \n");
    for (int i = 0; i < CANTIDAD; ++i) {
        if (numero[i]%2 != 0){
            printf("%d ",numero[i]);
            impares[i] = numero[i];
        }
    }
    printf("\n\n");
    for (int i = 0; i < CANTIDAD; ++i) {
        printf("%d ",impares[i]);
    }

    return 0;
}
