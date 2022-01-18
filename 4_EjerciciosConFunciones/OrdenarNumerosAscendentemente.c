/* Hacer un programa que muestre 3 numeros ordenados ascendentemente,
utilizar un procedimiento para cada operacion. */

#include <stdio.h>

void ascendente(int a, int b, int c);

int main(){

    int a, b, c;

    printf("Ingrese 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    ascendente(a, b, c);

    return 0;
}


void ascendente(int a,int b, int c){
    printf("\nOrden Ascendente");

    if (a>= b && a>= c){//a es el numero más grande
        if (b>= c){//b es el numero más grande
            printf("\n%d %d %d", c, b, a);
        }
        else{
            printf("\n%d %d %d", b, c, a);
        }
    }
    if(b>=a && b>=c){//b es el numero más grande
        if(a>=c){//a es el numero más grande
            printf("\n%i %i %i",c,a,b);
        }
        else{
            printf("\n%i %i %i",a,c,b);
        }
    }
    if(c>=a && c>=b){//c es el numero más grande
        if(a>=b){//a es el numero más grande
            printf("\n%i %i %i",b,a,c);
        }
        else{
            printf("\n%i %i %i",a,b,c);
        }
    }



}