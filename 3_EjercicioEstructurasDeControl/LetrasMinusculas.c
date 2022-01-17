// *  Hacer un bucle do...while para imprimir las letras
// *  minusculas del alfabeto

#include <stdio.h>

int main(){

    char letra = 'a',LETRA = 'A';
    int letraNum = 97,LETRANUM = 65;

    //97 -> 122 minusculas
    //65 -> 90 mayusculas

/*
    do {
        printf("%c.\n",letra);
        letra++;
    }while(letra <= 'z');

    do {
        printf("%c.\n",LETRA);
        LETRA++;
    }while(LETRA<= 'Z');
    */
    do {
        printf("%c.\n",letraNum);
        letraNum++;
    }while(letraNum <= 122);

    do {
        printf("%c.\n",LETRANUM);
        LETRANUM++;
    }while(LETRANUM<= 90);

    printf("Escribe un n%cmero\n",171);
    printf("Escribe un numero\n");

    return 0;
}

