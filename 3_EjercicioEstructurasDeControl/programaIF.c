/* Digite un numero, si el numero supera a 10,
multiplique los 10 primeros numeros,
sino, sumelos */

#include <stdio.h>

int main(){
    int numero,i=1,suma=0,multiplicacion=1;

    printf("Digite un numero: ");
    scanf("%d", &numero);

    if (numero>10){
        while(i<=10){
            multiplicacion*=i;
            i++;
        }
        printf("La multiplicacion es: %i", multiplicacion);
    }else {
        while (i <= 10) {
            suma += i;
            i++;
        }
        printf("La suma es: %i", suma);
    }

    return 0;
}