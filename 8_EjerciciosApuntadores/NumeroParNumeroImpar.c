/*
Comprobar si un número es par o impar, y señalar la
posicion de memoria donde se está guardando el número. Con punteros.
*/


#include <stdio.h>

int main(){

    int numero,*apuntadorNumero = &numero;

    printf("Introduce un numero: ");
    scanf("%d",&numero);


    if (*apuntadorNumero % 2 == 0){
        printf("El numero %d es par\n",numero);
        printf("El numero %d es par\n",*apuntadorNumero);
        printf("La direccion de memoria donde se guarda es %p\n",apuntadorNumero);
    }else{
        printf("El numero %d es impar\n",numero);
        printf("El numero %d es impar\n",*apuntadorNumero);
        printf("La direccion de memoria donde se guarda es %p\n",apuntadorNumero);
    }

    return 0;
}