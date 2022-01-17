//Suma de los n primeros numeros

#include <stdio.h>

int main(){

    int suma = 0,numero,i=1;

    printf("Introduce un numero: ");
    scanf("%d",&numero);

    while (i<=numero){
        suma += i;
        i++;
    }
    printf("\nLa suma de los %d primeros numeros es: %d",numero,suma);

    return 0;
}
