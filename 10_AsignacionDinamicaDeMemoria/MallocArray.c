/*
Reservar memoria con malloc para un array de tipo double
para 1000 numeros, y
comprobar si el puntero es válido (si el puntero devuelve NULL,
significa que no hay suficiente memoria).
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMEROTOTAL 1000

int main(){

    double *apuntador_double;
    apuntador_double = malloc(NUMEROTOTAL * sizeof(double));
    //apuntador_double = calloc(NUMEROTOTAL , sizeof(double));

    if(apuntador_double == NULL){
        printf("No hay suficiente memoria\n");
        return -1;
    }else{
        printf("Hay suficiente memoria\n");
        srand(time(NULL));

        for(int i = 0; i < NUMEROTOTAL; i++){
            //*(apuntador_double + i) = (double)rand() / RAND_MAX;
            //apuntador_double[i] = rand()%((NUMEROTOTAL));
            //apuntador_double[i] = rand();
            *(apuntador_double + i) = rand();
            printf("Indice: %d Valor: %lf\n",i+1, apuntador_double[i]);
        }
    }
    free(apuntador_double);


    return 0;
}
