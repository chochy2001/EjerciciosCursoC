/*Copiar el contenido de un Array1 de 5 elementos hacia
otro Array2. Usando funciones*/

#include <stdio.h>
#define TAM 5

void copiarArrayaOtro(int array1[], int array2[], int tam);

int main(){

    int Array1[TAM];
    int Array2[TAM];
    printf("\nArray 1: ");
    for (int i = 0; i < TAM; ++i) {
        printf("%d ",Array1[i]);
    }
    printf("\n");
    printf("\nArray 2: ");
    for (int i = 0; i < TAM; ++i) {
        printf("%d ",Array2[i]);
    }
    printf("\n");

    printf("\nIngrese los elementos del primer array: ");
    for (int i = 0; i < TAM; ++i) {
        printf("\nElemento %d: ", i+1);
        scanf("%d", &Array1[i]);
    }
    printf("\nArray 1: ");
    for (int i = 0; i < TAM; ++i) {
        printf("%d ",Array1[i]);
    }
    printf("\n");
    printf("\nArray 2: ");
    for (int i = 0; i < TAM; ++i) {
        printf("%d ",Array2[i]);
    }
    printf("\n");

    printf("\nCopiando arrays\n");
    copiarArrayaOtro(Array1, Array2, TAM);

    printf("\nArray 1: ");
    for (int i = 0; i < TAM; ++i) {
        printf("%d ",Array1[i]);
    }
    printf("\n");
    printf("\nArray 2: ");
    for (int i = 0; i < TAM; ++i) {
        printf("%d ",Array2[i]);
    }
    printf("\n");

    return 0;
}

void copiarArrayaOtro(int array1[], int array2[], int tamanio){
    for (int i = 0; i < tamanio; ++i) {
        array2[i] = array1[i];
    }

    for (int i = 0; i < TAM; ++i) {
        printf("\nElemento %d: %d", i+1, array2[i]);
    }

}

