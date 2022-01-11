/*Ingrese un numero y calcule e imprima su raiz cuadrada.
Si el numero es
negativo imprima el numero y un mensaje que diga tiene
raiz imaginaria */

#include <stdio.h>
#include <math.h>

int main(){

    float numero, raizCuadrada;

    printf("Escribe un numero\n");
    scanf("%f",&numero);

    if(numero >= 0){
        raizCuadrada = sqrt(numero);
        printf("\nSu raiz cuadrada es: %.2f",raizCuadrada);
    }else{
        printf("\nEl numero tiene raiz Imaginaria");
    }

    return 0;
}
