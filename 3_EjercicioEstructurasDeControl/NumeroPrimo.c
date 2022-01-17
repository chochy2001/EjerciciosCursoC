// * Determinar si el numero ingresado por el usuario es primo o no

// * 2,5,7,
// * 4,10,

#include <stdio.h>

int main(){

    int numero,cont = 0;

    printf("Escribe un numero\n");
    scanf("%d",&numero);

    //Determinar si tiene 2 divisores unicamente

    for (int i = 1; i <= numero; ++i) {
        if (numero %i == 0){
            cont++;
        }
    }

    if (cont > 2){
        printf("\nEl numero es compuesto");
    }else{
        printf("\nEl numero es Primo");
    }

    return 0;
}