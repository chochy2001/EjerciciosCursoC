/*Calcular el mayor de dos numeros leidos del teclado y
visualizarlo en pantalla.*/

#include <stdio.h>

int main(){

    int num1,num2;

    printf("Escribe dos numeros\n");
    scanf("%d %d",&num1,&num2);

    if(num1>num2)
        printf("El numero mayor es: %d",num1);
    else
        printf("El numero mayor es: %d",num2);

    return 0;
}
