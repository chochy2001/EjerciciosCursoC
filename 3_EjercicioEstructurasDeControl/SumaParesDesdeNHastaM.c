// Sumar pares desde n hasta m

#include <stdio.h>

int main(){

    int numeroInicio, numeroFin, sumaPares = 0,sumaImpares = 0;

    printf("Introduce el numero de inicio: ");
    scanf("%d", &numeroInicio);

    printf("Introduce el numero de fin: ");
    scanf("%d", &numeroFin);

    while (numeroInicio <= numeroFin){
        if(numeroInicio % 2 == 0){
            sumaPares += numeroInicio;
        }else{
            sumaImpares += numeroInicio;
        }
        numeroInicio++;
    }

    printf("La sumaPares de los pares es: %d", sumaPares);
    printf("\nLa sumaImpares de los impares es: %d", sumaImpares);

    return 0;
}