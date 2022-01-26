/* Dado un vector de 10 elementos ={1, 2, 3, 4, 4, 7, 8, 9, 5, 4},
escribir un programa en C (haciendo uso de puntero) que muestre las
direcciones de memoria de cada elemento del vector.*/

#include <stdio.h>

int main(){

    int vector[] = {1, 2, 3, 4, 4, 7, 8, 9, 5, 4};
    int *punteroAVector = vector;

    for (int i = 0; i < 10; ++i) {

        //printf("Dato vector[%d] = %d\n", i, vector[i]);
        //printf("Direccion de memoria de vector[%d] = %p\n", i, &vector[i]);
        //printf("Direccion de memoria de vector[%d] = %p\n", i, punteroAVector);
        printf("punteroAVector: %p %d\n", punteroAVector,punteroAVector);
        printf("&punteroAVector: %p %d\n", &punteroAVector,&punteroAVector);
        printf("*punteroAVector: %p %d\n", *punteroAVector,*punteroAVector);
        printf("\n\n");

        punteroAVector++;
    }


    return 0;
}
















