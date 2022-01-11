// * Pedir 2 numeros al usuario, sumarlos, restarlos, multiplicarlos y dividirlos.

#include <stdio.h>

int main(){
    float num1,num2,suma,resta,multiplicacion,division;

    printf("Escribe 2 numeros\n");
    scanf("%f %f",&num1,&num2);

    suma = num1+num2;
    resta = num1-num2;
    multiplicacion = num1*num2;
    division = num1/num2;

    printf("\nLa suma es: %.2f",suma);
    printf("\nLa resta es: %.2f",resta);
    printf("\nLa multiplicacion es: %.2f",multiplicacion);
    printf("\nLa division es: %.2f",division);

    return 0;
}
