//Determinar si un numero es par o no

#include <stdio.h>
void compruebaPar(int numero);

int main(){

    int numero;
    printf("Introduce un numero: ");
    scanf("%d", &numero);

    compruebaPar(numero);

    return 0;
}

void compruebaPar(int numero){
    if (numero %2 == 0){
        printf("El numero %d es par", numero);
    }else{
        printf("El numero %d es impar", numero);
    }
}

