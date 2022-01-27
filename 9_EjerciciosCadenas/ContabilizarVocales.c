/*Leer un string con getchar() y contabilizar cuantas veces aparece
la vocal a, e, i, o, u, e imprimir el contador de cada una.*/

#include <stdio.h>

int main(){

    int cadena,contadorA = 0,contadorE = 0, contadorI = 0, contadorO = 0, contadorU = 0;

    printf("Ingrese una cadena: ");

    while('\n' != (cadena = getchar())){
        switch(cadena){
            case 'a':
            case 'A':
                contadorA++;
                break;
            case 'e':
            case 'E':
                contadorE++;
                break;
            case 'i':
            case 'I':
                contadorI++;
                break;
            case 'o':
            case 'O':
                contadorO++;
                break;
            case 'u':
            case 'U':
                contadorU++;
                break;
        }
        putchar(cadena);
    }
    printf("\n\nA: %d\nE: %d\nI: %d\nO: %d\nU: %d\n",contadorA,contadorE,contadorI,contadorO,contadorU);


    return 0;
}