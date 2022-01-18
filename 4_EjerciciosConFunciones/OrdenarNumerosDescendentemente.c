/*Hacer un programa que muestre 3 numeros ordenados desendentemente,
utilizar un procedimiento para cada operacion.*/


#include <stdio.h>

void descendente(int a, int b, int c);

int main(){

    int a, b, c;
    printf("Ingrese 3 numeros: ");
    scanf("%d %d %d", &a, &b, &c);

    descendente(a, b, c);

    return 0;
}

void descendente(int a, int b, int c){
    printf("\nOrden descendente: ");
    if (a>=b && a>= c){
        if (b>=c){
            printf("%d %d %d\n", a, b, c);
        }
        else{
            printf("%d %d %d\n", a, c, b);
        }
    }

    if (b>=a && b>= c){
        if (a>=c){
            printf("%d %d %d\n", b, a, c);
        }
        else{
            printf("%d %d %d\n", b, c, a);
        }
    }
    if (c>=a && c>= b){
        if (a>=b){
            printf("%d %d %d\n", c, a, b);
        }
        else{
            printf("%d %d %d\n", c, b, a);
        }
    }

}
