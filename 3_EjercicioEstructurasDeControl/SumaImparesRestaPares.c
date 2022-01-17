// Sumar 1-2+3-4...

/*
impares (+)
pares (-)

suma_pares = -2 -4 -6 ...
suma_impares = 1 + 3 + 5...

suma = suma_pares + suma_impares

Entrada = 6;

1-2+3-4+5-6
-1+3-4+5-6
2-4+5-6
-2+5-6
3-6
-3

*/

#include <stdio.h>

int main(){

    int i=1, sumaFinal, sumaPares = 0, sumaImpares = 0, numero,numeroParNegativo;
    printf("Escribe el total de numeros de la serie: ");
    scanf("%d", &numero);

    while(i <= numero){
        if (i%2 == 0){
            numeroParNegativo = i * -1;
            sumaPares += numeroParNegativo;
        }else{
            sumaImpares += i;
        }
        i++;
    }

    sumaFinal = sumaImpares + sumaPares;

    printf("La suma de los numeros pares es: %d\n", sumaPares);
    printf("La suma de los numeros impares es: %d\n", sumaImpares);
    printf("La suma total es: %d\n", sumaFinal);

    return 0;
}







