// Hacer un programa que realice la media aritmetica de 2 numeros.

#include <stdio.h>

float mediaAritmetica(float num1, float num2);

int main(){

    float num1, num2;
    printf("Escribe dos numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("La media aritmetica es: %.2f", mediaAritmetica(num1, num2));

    return 0;
}


float mediaAritmetica(float num1, float num2){
    float media = (num1 + num2) / 2;
    return media;
}
