// * Pasar de un numero entero a binario con Recursividad


#include <stdio.h>

void NumeroEnteroABinario(int numero);

int main(){

    int numero;
    do{
        printf("Introduce un numero entero: ");
        scanf("%d", &numero);
    }while(numero < 0);

    NumeroEnteroABinario(numero);

    return 0;
}

void NumeroEnteroABinario(int numero){
    if(numero>1) NumeroEnteroABinario(numero/2);
    printf("%d", numero%2);
}


