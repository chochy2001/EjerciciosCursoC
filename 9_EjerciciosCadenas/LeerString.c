//* Leer un string con getchar() y contabilizar cuantas vocales tiene.

#include <stdio.h>

int main(){

    int cadena,contadorVocales = 0;

    while('\n' != (cadena = getchar())){
        if(cadena == 'a' || cadena == 'e' || cadena == 'i' || cadena == 'o' || cadena == 'u'){
            contadorVocales++;
        }
        putchar(cadena);
    }
    printf("\n\nEl numero de vocales es: %d",contadorVocales);

    return 0;
}