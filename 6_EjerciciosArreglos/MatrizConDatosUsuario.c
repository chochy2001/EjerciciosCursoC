/*Hacer una matriz de tipo entera preguntandole al usuario el
numero de filas y el numero de columnas, rellenar la matriz y luego
mostrarla en pantalla*/

#include <stdio.h>

int main(){

    int filas,columnas;

    printf("Ingrese el numero de filas: ");
    fflush(stdin);
    scanf("%d",&filas);

    printf("Ingrese el numero de columnas: ");
    fflush(stdin);
    scanf("%d",&columnas);

    printf("\n\n");
    int matriz[filas][columnas];

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("Ingrese el valor de la posicion [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\n\n");


    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
