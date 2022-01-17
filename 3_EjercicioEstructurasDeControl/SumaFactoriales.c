// Suma de Factoriales

#include <stdio.h>

int main(){

    int factorial = 1,suma = 0,cantidadFactorial;

    printf("Ingrese la cantidad de factoriales a sumar: ");
    scanf("%d,",&cantidadFactorial);

    for (int i = 1; i <= cantidadFactorial; ++i) {
        //factorial = factorial * i;
        //suma = suma + factorial;
        factorial *= i;
        suma += factorial;
    }

    printf("La suma de factoriales es: %d",suma);

    return 0;
}
