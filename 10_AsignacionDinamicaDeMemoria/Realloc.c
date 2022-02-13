/*
Reservar memoria para un arreglo de 5 numeros,
rellenarlo con numeros que digite
el usuario, luego utilizar realloc para ampliar ese arreglo a 10
numeros y agregar
5 numeros más, por ultimo imprimir el arreglo resultante de 10 numeros.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *apuntador_arreglo,*apuntador_arreglo_resultante;
    apuntador_arreglo = (int*)malloc(5*sizeof(int));


    for (int i = 0; i < 5; ++i) {
        printf("\nIngrese un numero: ");
        //scanf("%d",&apuntador_arreglo[i]);
        scanf("%d",(apuntador_arreglo+i));
        printf("%p\n",apuntador_arreglo+i);
    }

    apuntador_arreglo_resultante = (int*)realloc(apuntador_arreglo,10*sizeof(int));
    printf("\n\n");

    for (int i = 5; i < 10; ++i) {
        printf("\nIngrese un numero: ");
        //scanf("%d",&apuntador_arreglo[i]);
        scanf("%d",(apuntador_arreglo+i));
        printf("%p\n",apuntador_arreglo+i);
    }
    printf("\n\n");

    for (int i = 0; i < 10; ++i) {
        printf("%d\n",apuntador_arreglo_resultante[i]);
    }

    return 0;

    }



