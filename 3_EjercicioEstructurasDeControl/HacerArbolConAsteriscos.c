/*  Hacer un arbol con '*' del tipo:
	ejemplo:

	Digite el numero de filas : 5

		*
		**
		***
		****
		*****
*/

#include <stdio.h>

int main(){
    int numFilas;
    printf("Escribe el numero de filas\n");
    scanf("%d",&numFilas);

    for (int i = 0; i < numFilas; ++i) {//numFilas = 3
        for (int j = 0; j <= i; ++j) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}



