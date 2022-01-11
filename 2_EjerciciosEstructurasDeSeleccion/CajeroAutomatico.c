/* Hacer un programa que simule un cajero automatico con
un saldo inicial de 1000 Dolares.*/

#include <stdio.h>

int main(){
    float saldo = 1000,cantidad;
    int opcionElegida;
    printf("\nBienvenido a tu cajero virtual\n");

    do{
    printf("\nEscribe lo que quieras hacer\n");
    printf("1) Agregar dinero a la cuenta\n");
    printf("2) Retirar dinero de la cuenta\n");
    printf("3) Ver saldo actual\n");
    printf("4) Salir\n");
    scanf("%d",&opcionElegida);

    switch(opcionElegida){
        case 1:
            printf("Selecciono agregar dinero a la cuenta\n");
            printf("Escriba la cantidad que desea ingresar\n");
            scanf("%f",&cantidad);
            saldo += cantidad;
            printf("El saldo actual es: $%.2f",saldo);
            break;
        case 2:
            printf("Selecciono retirar dinero de la cuenta\n");
            printf("Escriba la cantidad que desea retirar\n");
            scanf("%f",&cantidad);
            saldo -= cantidad;
            printf("El saldo actual es: $%.2f",saldo);
            break;
        case 3:
            printf("Selecciono ver el saldo actual\n");
            printf("El saldo actual es: $%.2f",saldo);
            break;
        case 4:
            break;
        default:
            printf("Opcion no disponible\n");
    }

    }while(opcionElegida!=4);
    return 0;
}


