// * Invertir un número entero con Recursividad

#include <stdio.h>

void invertir(int numero);

int main(){

    int numero;

    do{
       printf("\nIngrese un numero entero: ");
       scanf("%d", &numero);
    } while (numero<0);

    invertir(numero);

    return 0;
}

void invertir(int numero){
    printf("%i",numero%10);
    if (numero>10) invertir(numero/10);
}