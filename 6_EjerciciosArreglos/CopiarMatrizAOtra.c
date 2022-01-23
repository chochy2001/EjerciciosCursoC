/*Hacer una matriz de tipo entera de 2 * 2, llenarla de numeros
y luego copiar todo su contenido hacia otra matriz.*/

#include <stdio.h>

int main(){

    int matriz1[2][2] = {{1,2},{3,4}}, matriz2[2][2];

    printf("Matriz 1:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("Matriz 2:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; ++j) {
            matriz2[i][j] = matriz1[i][j];
        }
    }

    printf("Matriz 1:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }
    printf("Matriz 2:\n");
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    return 0;
}
