/*
Sumar 2 matrices, pidiendo al usuario el numero de filas y
columnas y ademas los elementos de cada matriz, luego mostrar el
resultado.*/

#include <stdio.h>

void sumaMatrices(int matriz1[50][50], int matriz2[50][50], int filas, int columnas);
void restaMatrices(int matriz1[50][50], int matriz2[50][50], int filas, int columnas);

int main(){

    int filas, columnas;
    int matriz1[50][50], matriz2[50][50];

    printf("Ingrese el numero de filas de la matriz: ");
    fflush(stdin);
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas de la matriz: ");
    fflush(stdin);
    scanf("%d", &columnas);


    printf("\n");

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("Ingrese el elemento de la matriz 1 en la posicion [%d][%d]: ", i, j);
            fflush(stdin);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("\nMatriz 1\n");
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");


    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("Ingrese el elemento de la matriz 2 en la posicion [%d][%d]: ", i, j);
            fflush(stdin);
            scanf("%d", &matriz2[i][j]);
        }
    }
    printf("\nMatriz 2\n");
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSuma: \n\n");
    sumaMatrices(matriz1, matriz2, filas, columnas);
    printf("\n\nResta: \n\n");
    restaMatrices(matriz1, matriz2, filas, columnas);

    return 0;
}

void sumaMatrices(int matriz1[50][50], int matriz2[50][50], int filas, int columnas){
    int sumaMatriz[filas][columnas];

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            sumaMatriz[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("%d ", sumaMatriz[i][j]);
        }
        printf("\n");
    }


}
void restaMatrices(int matriz1[50][50], int matriz2[50][50], int filas, int columnas){
    int restaMatriz[filas][columnas];

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            restaMatriz[i][j] = matriz1[i][j] - matriz2[i][j];
        }
    }

    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            printf("%d ", restaMatriz[i][j]);
        }
        printf("\n");
    }


}
