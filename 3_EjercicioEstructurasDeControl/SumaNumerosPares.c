/* Hacer un programa que imprima la suma de todos los numeros
pares que hay desde 1 hasta n, y diga cuantos numeros hay.*/

#include <stdio.h>

int main(){

    int contador = 0,numero,suma = 0;
    printf("Escribe la cantidad de los elementos: ");
    scanf("%d",&numero);

    for (int i = 1; i <= numero; ++i) {
        if (i%2==0){
            suma += i;
            contador++;
        }
    }

    printf("La suma de los numeros pares es: %d\n",suma);
    printf("La cantidad de numeros pares es: %d\n",contador);

    return 0;
}

