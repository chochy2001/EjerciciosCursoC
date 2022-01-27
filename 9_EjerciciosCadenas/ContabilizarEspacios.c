//* Leer una cadena de caracteres con getchar()
//* y contabilizar cuantos espacios ocupa.

#include <stdio.h>

int main(){

    int cadena,contador=0;

    while('\n' != (cadena=getchar())){ //* \0 caracter nulo
        if(cadena == ' '){
            contador++;
        }
    }

    printf("%d",contador);

    return 0;
}