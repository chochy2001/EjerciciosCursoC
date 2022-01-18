/* Hacer un programa que muestre una tabla de multiplicar hasta el 20
de un numero cualquiera por pantalla, el numero se pide en la
funcion principal. Usar procedimiento */

#include <stdio.h>

void tablaDeMultiplicar(int numero);

int main(){

    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    tablaDeMultiplicar(numero);

    return 0;
}

void tablaDeMultiplicar(int numero){

    for (int i = 1; i <= 20; ++i) {
        printf("%d x %d = %d\n", numero, i, numero*i);
    }
}



