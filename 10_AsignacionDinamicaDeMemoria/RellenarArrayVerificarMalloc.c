/*
Pedir al usuario el número de elementos para un array de
numeros enteros, posteriormente comprobar con malloc si hay memoria
suficiente (si el puntero es válido, es decir diferente de NULL),
si la hay es entonces rellenar ese array con numeros
aleatorios, si no la hay decir que hay un error en la
asignacion de memoria.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int *apuntador_arreglo,numeros_array;

    printf("Ingrese el numero de elementos del arreglo: \n");
    scanf("%d",&numeros_array);

    apuntador_arreglo = (int *) malloc(numeros_array * sizeof(int));

    if(apuntador_arreglo == NULL) {
        printf("Error en la asignacion de memoria\n");
        return -1;
    }else{
        srand(time(NULL));
        for(int i = 0; i < numeros_array; i++){
           // *(apuntador_arreglo + i) = rand() % 100;
            apuntador_arreglo[i] = rand();
            printf("%d) Numero: %d\n",i+1,apuntador_arreglo[i]);
        }
    }

    return 0;
}
